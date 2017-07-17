disease('Missed period','Pregnancy').
disease('Mild cramping and spotting','Pregnancy').
disease('Fatigue','Pregnancy').
disease('Nausea','Pregnancy').
disease('Tingling breasts','Pregnancy').
disease('Aching breasts','Pregnancy').
disease('Frequent Urination','Pregnancy').
disease('Bloating','Pregnancy').
disease('Motion sickness','Pregnancy').
disease('Mood swings','Pregnancy').
disease('Temperature changes','Pregnancy').
disease('High blood pressure','Pregnancy').
disease('Extreme fatigue and heartburn','Pregnancy').
disease('Faster heartbeat','Pregnancy').
disease('Breast and nipple changes','Pregnancy').
disease('Acne','Pregnancy').
disease('Noticeable weight gain','Pregnancy').
disease('Pregnancy glow','Pregnancy').
disease('Fever','Pregnancy').
disease('Chills','AIDS').
disease('Rash','AIDS').
disease('Night sweats','AIDS').
disease('Muscle aches','AIDS').
disease('Sore throat','AIDS').
disease('Fatigue','AIDS').
disease('Swollen lymph nodes','AIDS').
disease('Mouth ulcers','AIDS').
disease('Fever','Hepatitis C').
disease('Feeling Tired','Hepatitis C').
disease('Poor Appetite','Hepatitis C').
disease('Nausea','Hepatitis C').
disease('Vomiting','Hepatitis C').
disease('Stomach pain','Hepatitis C').
disease('Joint pain','Hepatitis C').
disease('Muscle pain','Hepatitis C').
disease('Abnormalities in urine','Hepatitis C').
disease('Abnormalities in bowel movements','Hepatitis C').
disease('A yellowing in your eyes','Hepatitis C').
disease('A yellowing in your skin','Hepatitis C').
disease('Fever','Influenza').
disease('Chills','Influenza').
disease('Feeling feverish','Influenza').
disease('Cough','Influenza').
disease('Sore throat','Influenza').
disease('Runny nose','Influenza').
disease('Stuffy nose','Influenza').
disease('Muscle or body aches','Influenza').
disease('Body aches','Influenza').
disease('Headaches','Influenza').
disease('Fatigue(tiredness)','Influenza').
disease('vomiting and diarrhea','Influenza').

find_disease(M):-
	findall(X, (member(Y, M), disease(Y, X)), Xs),
	length(Xs,N),
	N > 0 -> 
	sort(Xs, K),nl,
	write("Hey The following are the diseases which you might be affected with"),nl,
	write(K),nl
	;
	nl,
	write("Hey, Sorry!!!, We havent found a diagnosis based on your symptoms"),
	fail.