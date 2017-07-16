	
disease('missed_period','Pregnancy').
disease('mild_cramping_and_spotting','Pregnancy').
disease('fatigue','Pregnancy').
disease('nausea','Pregnancy').
disease('tingling_or_aching_breasts','Pregnancy').
disease('frequent_urination','Pregnancy').
disease('bloating','Pregnancy').
disease('motion_sickness','Pregnancy').
disease('mood_swings','Pregnancy').
disease('temperature_changes','Pregnancy').
disease('high_blood_pressure','Pregnancy').
disease('extreme_fatigue_and_heartburn','Pregnancy').
disease('faster_heartbeat','Pregnancy').
disease('breast_and_nipple_changes','Pregnancy').
disease('acne','Pregnancy').
disease('noticeable_weight_gain','Pregnancy').
disease('pregnancy_glow','Pregnancy').
disease('Fever','Pregnancy').
disease('Chills','AIDS').
disease('Rash','AIDS').
disease('Night_sweats','AIDS').
disease('Muscle_aches','AIDS').
disease('Sore_throat','AIDS').
disease('Fatigue','AIDS').
disease('Swollen_lymph_nodes','AIDS').
disease('Mouth_ulcers','AIDS').
disease('fever','Hepatitis_C').
disease('feeling_tired','Hepatitis_C').
disease('poor_appetite','Hepatitis_C').
disease('nausea_or_vomiting','Hepatitis_C').
disease('pain_in_your_stomach','Hepatitis_C').
disease('joint_or_muscle_pain','Hepatitis_C').
disease('abnormalities_in_urine_or_bowel_movements','Hepatitis_C').
disease('a_yellowing_in_your_eyes_or_skin','Hepatitis_C').
disease('Fever_or_feeling_feverish/chills','Influenza').
disease('Cough','Influenza').
disease('Sore_throat','Influenza').
disease('Runny_or_stuffy_nose','Influenza').
disease('Muscle_or_body_aches','Influenza').
disease('Headaches','Influenza').
disease('Fatigue_(tiredness)','Influenza').
disease('vomiting_and_diarrhea','Influenza').

find_disease:-
		write('Enter_the_Symptom'),nl,
		read(Input),nl,
		disease(Input,Output),nl,
		write(Output),nl,!.