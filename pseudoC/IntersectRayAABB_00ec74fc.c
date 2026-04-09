// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntersectRayAABB
// Entry Point: 00ec74fc
// Size: 608 bytes
// Signature: undefined __cdecl IntersectRayAABB(XVector3 * param_1, XVector3 * param_2, XVector3 * param_3, XVector3 * param_4, double * param_5, XVector3 * param_6)


/* aabbtree::IntersectRayAABB(aabbtree::XVector3<double> const&, aabbtree::XVector3<double> const&,
   aabbtree::XVector3<double> const&, aabbtree::XVector3<double> const&, double&,
   aabbtree::XVector3<double>*) */

undefined8
aabbtree::IntersectRayAABB
          (XVector3 *param_1,XVector3 *param_2,XVector3 *param_3,XVector3 *param_4,double *param_5,
          XVector3 *param_6)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar4 = *(double *)param_1;
  dVar3 = *(double *)param_3;
  if (dVar3 <= dVar4) {
    dVar5 = -1.0;
    if (*(double *)param_4 < dVar4) {
      if (*(double *)param_2 != 0.0) {
        dVar5 = (*(double *)param_4 - dVar4) / *(double *)param_2;
      }
      goto LAB_00ec7548;
    }
    bVar2 = true;
    dVar7 = *(double *)(param_1 + 2);
    dVar6 = *(double *)(param_3 + 2);
    if (dVar6 <= dVar7) goto LAB_00ec7588;
LAB_00ec755c:
    if (*(double *)(param_2 + 2) != 0.0) {
      dVar10 = (dVar6 - dVar7) / *(double *)(param_2 + 2);
LAB_00ec75ac:
      bVar2 = false;
      goto LAB_00ec75b0;
    }
    bVar2 = false;
    dVar10 = -1.0;
    dVar8 = *(double *)(param_1 + 4);
    dVar9 = *(double *)(param_3 + 4);
    if (dVar8 < dVar9) goto LAB_00ec75c0;
LAB_00ec760c:
    if (*(double *)(param_4 + 4) < dVar8) {
      if (*(double *)(param_2 + 4) == 0.0) {
LAB_00ec7630:
        dVar12 = -1.0;
      }
      else {
        dVar12 = (*(double *)(param_4 + 4) - dVar8) / *(double *)(param_2 + 4);
      }
    }
    else {
      dVar11 = 0.0;
      dVar12 = -1.0;
      if (bVar2) goto LAB_00ec7644;
    }
  }
  else {
    if (*(double *)param_2 == 0.0) {
      bVar2 = false;
      dVar5 = -1.0;
      dVar7 = *(double *)(param_1 + 2);
      dVar6 = *(double *)(param_3 + 2);
      if (dVar7 < dVar6) goto LAB_00ec755c;
    }
    else {
      dVar5 = (dVar3 - dVar4) / *(double *)param_2;
LAB_00ec7548:
      bVar2 = false;
      dVar7 = *(double *)(param_1 + 2);
      dVar6 = *(double *)(param_3 + 2);
      if (dVar7 < dVar6) goto LAB_00ec755c;
    }
LAB_00ec7588:
    dVar10 = -1.0;
    if (*(double *)(param_4 + 2) < dVar7) {
      if (*(double *)(param_2 + 2) != 0.0) {
        dVar10 = (*(double *)(param_4 + 2) - dVar7) / *(double *)(param_2 + 2);
      }
      goto LAB_00ec75ac;
    }
LAB_00ec75b0:
    dVar8 = *(double *)(param_1 + 4);
    dVar9 = *(double *)(param_3 + 4);
    if (dVar9 <= dVar8) goto LAB_00ec760c;
LAB_00ec75c0:
    if (*(double *)(param_2 + 4) == 0.0) goto LAB_00ec7630;
    dVar12 = (dVar9 - dVar8) / *(double *)(param_2 + 4);
  }
  dVar13 = dVar10;
  if (dVar10 <= dVar5) {
    dVar13 = dVar5;
  }
  dVar11 = dVar12;
  if (dVar12 <= dVar13) {
    dVar11 = dVar13;
  }
  cVar1 = '\x02';
  if (dVar12 <= dVar13) {
    cVar1 = dVar5 < dVar10;
  }
  if (dVar11 < 0.0) {
    return 0;
  }
  dVar4 = dVar4 + dVar11 * *(double *)param_2;
  dVar7 = dVar7 + dVar11 * *(double *)(param_2 + 2);
  if (dVar3 <= dVar4) {
    if ((dVar5 < dVar10 || dVar13 < dVar12) && (*(double *)param_4 + 0.0 < dVar4)) {
      return 0;
    }
    if (dVar6 <= dVar7) goto LAB_00ec7700;
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else {
    if (dVar5 < dVar10) {
      return 0;
    }
    if (dVar13 < dVar12) {
      return 0;
    }
    if (dVar7 < dVar6) {
      return 0;
    }
LAB_00ec7700:
    if ((cVar1 != '\x01') && (*(double *)(param_4 + 2) + 0.0 < dVar7)) {
      return 0;
    }
  }
  dVar8 = dVar8 + dVar11 * *(double *)(param_2 + 4);
  if (dVar9 <= dVar8) {
    if ((cVar1 != '\x02') && (*(double *)(param_4 + 4) + 0.0 < dVar8)) {
      return 0;
    }
  }
  else if (dVar12 <= dVar13) {
    return 0;
  }
LAB_00ec7644:
  *param_5 = dVar11;
  return 1;
}


