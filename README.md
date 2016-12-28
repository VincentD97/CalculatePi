# CalculatePi

According to **Leibniz Series** :

<img src="http://latex.codecogs.com/gif.latex?\tan^{-1}x=x-\frac{1}{3}x^3+\frac{1}{5}x^5-\frac{1}{7}x^7+\cdots."/>

Plugging in x = 1 gives

<img src="http://latex.codecogs.com/gif.latex?\frac{\pi}{4}=1-\frac{1}{3}+\frac{1}{5}-\frac{1}{7}+\frac{1}{9}-\cdots."/>

**Euler's convergence improvement transformation** gives, with the RHS converges more rapidly,

<img src="http://latex.codecogs.com/gif.latex?a_0-a_1+a_2-\cdots=\sum_{k=0}^\infty\frac{(-1)^k(\Delta^ka_0)}{2^{k+1}}"/>

where the kth forward difference <img src="http://latex.codecogs.com/gif.latex?\Delta^ka_0=\sum_{m=0}^k(-1)^{k-m}{{k}\choose{m}}a_m"/>

Applying the Euler's transformation we have

<img src="http://latex.codecogs.com/gif.latex?\frac{\pi}{4}=\sum_{n=0}^\infty\frac{2^{n-1}(n!)^2}{(2n+1)!}"/>

<img src="http://latex.codecogs.com/gif.latex?\pi=2\cdot\sum_{n=0}^\infty\frac{n!\cdot(2\cdot4\cdot6\cdot\cdots\cdot(2n))}{(2n+1)!}=2\cdot1+2\cdot\frac{1}{3}+2\cdot\frac{1}{3}\cdot\frac{2}{5}+2\cdot\frac{1}{3}\cdot\frac{2}{5}\cdot\frac{3}{7}+\cdots"/>

We calculate π based on this equation.
