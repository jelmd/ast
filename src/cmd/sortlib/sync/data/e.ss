 SORT FIELDS=(01,3,CH,A)
 SUM FIELDS=NONE
  OUTFIL FILES=1,
         INCLUDE=(6,1,CH,NE,C'0'),
         OUTREC=(5,3,4,C'\n')
  OUTFIL FILES=2,
         SAVE,
         OUTREC=(5,3,4,C'\n')
