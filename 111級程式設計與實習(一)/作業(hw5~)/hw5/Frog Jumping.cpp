#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int cases = 0;
	scanf("%d", &cases);
	while (cases--) {
		long long int r, l, t, ans;
		scanf("%lld %lld %lld", &r, &l, &t);

		ans = (r - l)*(t / 2);

		if (t % 2 == 1)
			ans += r;

		printf("%lld\n", ans);
	}
	return 0;
}