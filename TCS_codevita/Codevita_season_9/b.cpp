#include<iostream>
#include<stdio.h>

typedef long long ll; 
using namespace std;

static ll numPalindrome(ll num);
static ll constructPalindrome(ll palPrefix, ll numLength);

int main(void)
{
    ll a = 0;
    ll b = 0;
    ll sum = 0, summ = 0; 
    cin >> a >> b;
    bool flag = true; 
    while(a <= b){
        ll x = 0, y = 0;
        x = a * 1000000;
        y = a * 1000000 + 235959;
        if(a < 10) sum += 236;
        else{
            summ = numPalindrome(y) - numPalindrome(x - 1);
            sum += summ;
        }
        summ = 0;
        a++;
        flag = false;
    }
    cout << sum;
    return 0;
}

static ll numPalindrome(ll num)
{
    ll numLength = 0;
    ll palLength = 0;
    ll palPrefix = 0;
    ll temp      = 0;
    ll i         = 0;

    for (numLength=0, temp = num; temp != 0; temp /= 10)
        numLength++;
    palLength = (numLength+1) / 2;
    palPrefix = num;
    for (i=0; i < numLength - palLength; i++)
        palPrefix /= 10;
    if (constructPalindrome(palPrefix, numLength) > num)
        palPrefix--;

    palPrefix *= 2;
    if (numLength & 1) {
        ll adjustment = 1;
        for (i=1;i<palLength;i++)
            adjustment *= 10;
        palPrefix -= (palPrefix/2 - adjustment + 1);
    } else {
        ll adjustment = 1;
        for (i=0;i<palLength;i++)
            adjustment *= 10;
        palPrefix += (adjustment - 1 - palPrefix/2);
    }
    return palPrefix;
}

static ll constructPalindrome(ll palPrefix, ll numLength)
{
    ll front = palPrefix;
    ll back  = 0;       

    if (numLength & 1)
        palPrefix /= 10;

    while (palPrefix != 0) {
        ll digit = palPrefix % 10;

        palPrefix /= 10;
        back       = back * 10 + digit;
        front     *= 10;
    }
    return front + back;
}
