abc([X, Y| Rest], [Y, X| Rest]):- X>Y.

abc([Z | L1], [Z| L2]) :- abc(L1,L2).


bubble(List, Sort) :- abc(List, List2), !,
bubble(List2, Sort).
bubble(Sor, Sor). 
