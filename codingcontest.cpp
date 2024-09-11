// LUOGU_RID: 131495467
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
const int N = 2e5 + 5, inf = 0x3f3f3f3f;
int n, m, k, a[N], b[N], mx[N][20], tp, st[N], pre[N], nxt[N], f[N], g[N];
int query (int l, int r) {
    int k = log2(r - l + 1);
    return max(mx[l][k], mx[r - (1 << k) + 1][k]);
}
struct BIT {
    int c[N];
    inline int lowbit (int x) {return x & -x;}
    inline void update (int x, int v) {
        for (; x <= 2e5; x += lowbit(x)) c[x] += v;
    }
    inline int Query (int x) {
        int res = 0;
        for (; x; x -= lowbit(x)) res += c[x];
        return res;
    }
    inline int query (int l, int r) {
        l = max(1, l), r = min(r, 200000);
        if (l > r) return 0;
        return Query(r) - Query(l - 1);
    }
}T;
struct node {
    int x, y;
}p[N], q[N];
bool operator < (node u, node v) {return u.x != v.x ? u.x < v.x : u.y < v.y;}
long long ans;
int main() {
    scanf ("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
        mx[i][0] = a[i];
    }
    for (int j = 1; j < 20; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) mx[i][j] = max(mx[i][j - 1], mx[i + (1 << (j - 1))][j - 1]);
    }
    for (int i = 1; i <= n; i++) {
        while (tp && a[st[tp]] > a[i]) nxt[st[tp--]] = i;
        pre[i] = st[tp];
        st[++tp] = i;
    }
    for (int i = 1; i <= n; i++) {
        f[i] = inf;
        if (pre[i]) f[i] = min(f[i], query(pre[i], i));
        if (nxt[i]) f[i] = min(f[i], query(i, nxt[i]));
    }
    for (int i = 1; i <= n; i++) pre[i] = nxt[i] = 0;
    for (int i = 1; i <= m; i++) {
        scanf ("%d", &b[i]);
        mx[i][0] = b[i];
    }
    for (int j = 1; j < 20; j++) {
        for (int i = 1; i + (1 << j) - 1 <= m; i++) mx[i][j] = max(mx[i][j - 1], mx[i + (1 << (j - 1))][j - 1]);
    }
    tp = 0;
    for (int i = 1; i <= m; i++) {
        while (tp && b[st[tp]] > b[i]) nxt[st[tp--]] = i;
        pre[i] = st[tp];
        st[++tp] = i;
    }
    for (int i = 1; i <= m; i++) {
        g[i] = inf;
        if (pre[i]) g[i] = min(g[i], query(pre[i], i));
        if (nxt[i]) g[i] = min(g[i], query(i, nxt[i]));
    }
    for (int i = 1; i <= n; i++) p[i] = {k - a[i], k - f[i]};
    for (int i = 1; i <= m; i++) q[i] = {g[i], b[i]};
    sort(p + 1, p + n + 1), sort(q + 1, q + m + 1);
    for (int i = 1; i <= m; i++) T.update(q[i].y, 1);
    for (int i = 1, j = 1; i <= n; i++) {
        while (j <= m && q[j].x <= p[i].x) T.update(q[j++].y, -1);
        ans += T.query(p[i].y + 1, p[i].x);
    }
    printf ("%lld\n", ans);
    return 0;
}