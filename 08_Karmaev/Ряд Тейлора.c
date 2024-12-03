#include "stdio.h"
#include "math.h"
#include "locale.h"

				
int fq(int a) {
	int k=1,q=1;
	if (a == 0) {
		return 1;
	}
	else{
		while (q <= a) {
			k *= q;
			a--;
		}
		return k;
	}
}

double cosinus(double x, double i) {
	double next=1.0;
	double sum = 1.0;
	for (int j = 1; j < i; j++) {
		next = next * ((-(x * x)) / ((2 * j-1) * (2 * j)));
		sum += next;
	}
	return sum;
}

double sinus(double x, int i) {
	double next = x;
	double sum = next;
	for (int j = 1; j < i; j++) {
		next = next * ((-(x * x)) / ((2 * j) * (2 * j + 1)));
		sum += next;
	}
	return sum;
}

double expa(double x, int i) {
	double next = 1;
	double sum = next;
	for (int j = 1; j < i; j++) {
		next = next * (x / j);
		sum += next;
	}
	return sum;
}

double logi(double x, int i) {
	double next = x-1;
	double sum = next;
	for (int j = 2; j < i; j++) {
		next = next * (-(((x - 1) * (j - 1))) / (j));
		sum += next;
	}
	return sum;
}

double cosinus1(double x, int i) {
	double next = 1.0;
	double sum = 1.0;
	for (int j = 2; j < i; j++) {
		next = next * ((-(x * x)) / ((2 * j - 1) * (2 * j)));
		sum += next;
	}
	return sum;
}





int main() {
	setlocale(LC_ALL, "Rus");
	printf("1.����������� ������ ������� � �������� �����.\n2.�������� �����������.");
	printf("\n������� �������=");
	int c;
	scanf_s("%d", &c);
	if (c==1)
	{
		printf("\n������� ����� ���������� x=");
		double x;
		scanf_s("%lf", &x);
		printf("\n������� �������� ���������� (������ ����� �������)=");
		int t;
		scanf_s("%d", &t);
		printf("\n����� ��������� ���� ��� ���������� (�� 1 �� 1000) =");
		double l;
		scanf_s("%lf", &l);
		printf("\n�������� �������: \n1.Cos(x) \n2.Sin(x) \n3.Exp(x)\n4.ln(x)\n�������=");
		int c1;
		scanf_s("%d", &c1);
		switch (c1) {
		case (1):
			double p = cosinus(x, l);
			double p1 = cos(x);
			double dp = fabs(p - p1);
			printf("\n����������� �������� = %*.*lf\n��������� �������� = %*.*lf\n������� = %f\n", t + 1, t, p, t + 1, t, p1, dp);
			break;
		case (2):
			double p2 = sinus(x, l);
			double p3 = sin(x);
			double dp1 = fabs(p2 - p3);
			printf("\n����������� �������� = %*.*lf\n��������� �������� = %*.*lf\n������� = %f", t + 1, t, p2, t + 1, t, p3, dp1);
			break;
		case (3):
			double p4 = expa(x, l);
			double p5 = exp(x);
			double dp2 = fabs(p4 - p5);
			printf("\n����������� �������� = %*.*lf\n��������� �������� = %*.*lf\n������� = %f", t + 1, t, p4, t + 1, t, p5, dp2);
			break;
		case (4):
			double p6 = logi(x, l);
			double p7 = log(x);
			double dp3 = fabs(p6 - p7);
			printf("\n����������� �������� = %*.*lf\n��������� �������� = %*.*lf\n������� = %f", t + 1, t, p6, t + 1, t, p7, dp3);
			break;
		}
	}
	else if(c == 2) {
		printf("\n������� ����� ���������� x=");
		double x;
		scanf_s("%lf", &x);
		printf("\n���������� ������������� (�� 1 �� 25)=");
		double l;
		scanf_s("%lf", &l);
		printf("\n�������� �������: \n1.Cos(x) \n2.Sin(x) \n3.Exp(x)\n4.ln(x)\n�������=");
		int c1;
		scanf_s("%d", &c1);
		switch (c1) {
		case (1):
			printf("\n��� �������\n");
			for (int i = 1; i < l; i++) {
				double pdidi = cosinus(x, i);
				printf(" %lf ", pdidi);
			}
			printf("\n��������� ��������\n");
			double pdidi = cos(x);
			printf(" %lf ", pdidi);
			printf("\n������� � ��������� ���������\n");
			for (int i = 1; i < l; i++) {
				double pdidi = cos(x), pdidi1 = cosinus(x, i);
				double pdelta = fabs(pdidi - pdidi1);
				printf(" %lf ", pdelta);
			}
			printf("\n");
			break;
		case (2):
			printf("\n��� �������\n");
			for (int i = 1; i < l; i++) {
				double pdidi = sinus(x, i);
				printf(" %lf ", pdidi);
			}
			printf("\n��������� ��������\n");
			double etal = sin(x);
			printf(" %lf ", etal);
			printf("\n������� � ��������� ���������\n");
			for (int i = 1; i < l; i++) {
				double et = sin(x), pdidi1 = sinus(x, i);
				double pdelta = fabs(et - pdidi1);
				printf(" %lf ", pdelta);
			}
			printf("\n");
			break;
		case(3):
			printf("\n��� �������\n");
			for (int i = 1; i < l; i++) {
				double pdidi = expa(x, i);
				printf(" %lf ", pdidi);
			}
			printf("\n��������� ��������\n");
			double eta = exp(x);
			printf(" %lf ", eta);
			printf("\n������� � ��������� ���������\n");
			for (int i = 1; i < l; i++) {
				double ski = exp(x), pdidi1 = expa(x, i);
				double pdelta = fabs(ski - pdidi1);
				printf(" %lf ", pdelta);
			}
			printf("\n");
			break;
		case(4):
			printf("\n��� �������\n");
			for (int i = 1; i < l; i++) {
				double pdidi = logi(x, i);
				printf(" %lf ", pdidi);
			}
			printf("\n��������� ��������\n");
			double elo = log(x);
			printf(" %lf ", elo);
			printf("\n������� � ��������� ���������\n");
			for (int i = 1; i < l; i++) {
				double rt = log(x), pdidi1 = logi(x, i);
				double pdelta = fabs(rt - pdidi1);
				printf(" %lf ", pdelta);
			}
			printf("\n");
			break;
		}
	}
}