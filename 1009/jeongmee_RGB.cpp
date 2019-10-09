#include <cstdio>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

const int R = 0, G = 1, B = 2, result = 3;

int main() {

	int total[1000][4] = { 0 }, N = 0;
	scanf("%d", &N);
	scanf("%d %d %d", &total[0][R], &total[0][G], &total[0][B]);
	total[0][result] = MIN(MIN(total[0][R], total[0][G]), MIN(total[0][B], total[0][G]));

	for (int i = 1; i < N; i++)
	{
		scanf("%d %d %d", &total[i][R], &total[i][G], &total[i][B]);

		total[i][R] += MIN(total[i - 1][G], total[i - 1][B]);
		total[i][G] += MIN(total[i - 1][R], total[i - 1][B]);
		total[i][B] += MIN(total[i - 1][R], total[i - 1][G]);

		total[i][result] = MIN(MIN(total[i][R], total[i][G]), MIN(total[i][B], total[i][G]));
	}
	printf("%d", total[N-1][result]);
	return 0;
}
