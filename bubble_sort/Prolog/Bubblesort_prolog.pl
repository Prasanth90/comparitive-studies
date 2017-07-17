gt(X,Y) :- X > Y.
bubblesort(List0, List) :-
        (   swap(List0, List1) ->
            bubblesort(List1, List)
        ;   List0 = List
        ).
swap([X,Y|Rest], [Y,X|Rest]) :-   % Swap first two elements
	gt(X,Y).
swap([Z|Rest], [Z|Rest1]) :-      % Swap elements in tail
	swap(Rest, Rest1).