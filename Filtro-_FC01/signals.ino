
//(x)= sin(x[i]*pi*f)
//vin=3 Db -> 0.707
double sigint[74]=
{
610,
604,
595,
585,
582,
578,
575,
571,
566,
562,
560,
564,
567,
565,
553,
540,
525,
519,
526,
552,
600,
722,
816,
764,
931,
1131,
1210,
1267,
1370,
35,
556,
905,
843,
772,
908,
1158,
1861,
2171,
2202,
2133,
2012,
1820,
1551,
1288,
155,
850,
804,
768,
768,
791,
834,
894,
947,
1016,
995,
961,
1249,
1620,
1915,
1911,
1857,
1839,
1646,
1504,
1316,
913,
944,
878,
964,
676,
602,
570,
672,
721
};
//filtro pasabajos de 1kHz
 double  sigaux[29] = {
  -0.0018225230f, -0.0015879294f, +0.0000000000f, +0.0036977508f, +0.0080754303f, +0.0085302217f, -0.0000000000f, -0.0173976984f,
  -0.0341458607f, -0.0333591565f, +0.0000000000f, +0.0676308395f, +0.1522061835f, +0.2229246956f, +0.2504960933f, +0.2229246956f,
  +0.1522061835f, +0.0676308395f, +0.0000000000f, -0.0333591565f, -0.0341458607f, -0.0173976984f, -0.0000000000f, +0.0085302217f,
  +0.0080754303f, +0.0036977508f, +0.0000000000f, -0.0015879294f, -0.0018225230f

};
