//
// Created by 王拓 on 2021/1/28.
//
#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<map>

#define x first
#define y second

using namespace std;
typedef pair<int, int> PII;

const int N = 110;

int m, n;
char g[N][N];
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
vector<PII> v;
map<double, char> mp;

double get_dist(const PII& v1, const PII& v2)
{
    double deltax = fabs(v1.x - v2.x), deltay = (v1.y - v2.y);
    return sqrt(deltax * deltax + deltay * deltay);
}

double get_hash()
{
    double res = 0;
    for (int i=0; i<v.size(); i++)
    {
        for (int j=i+1; j<v.size(); j++)
        {
            res += get_dist(v[i], v[j]);
        }
    }
    return res;
}

void dfs(int x, int y)
{
    g[x][y] = '0';
    v.push_back({x, y});
    for (int i=0; i<8; i++)
    {
        int a = x + dx[i], b = y + dy[i];
        if (a >= 0 && a < m && b >= 0 && b < n && g[a][b] == '1')
        {
            dfs(a, b);
        }
    }
}

void fill(const char& c)
{
    for (int i=0; i<v.size(); i++)
    {
        int x = v[i].x, y = v[i].y;
        g[x][y] = c;
    }
}

char get_id(double sum)
{
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if (fabs(it->x - sum) < 1e-6)
        {
            return it->y;
        }
    }
    mp[sum] = mp.size() + 'a';
    return mp[sum];
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i=0; i<m; i++)
        cin >> g[i];

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (g[i][j] == '1')
            {
                dfs(i, j);
                double sum = get_hash();
                char id =  get_id(sum);
                fill(id);
                v.clear();
            }
        }
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%c", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}


