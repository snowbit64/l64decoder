// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa0b8
// Entry Point: 007aa0b8
// Size: 304 bytes
// Signature: undefined FUN_007aa0b8(void)


void FUN_007aa0b8(GsShape *param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  TransformGroup *pTVar3;
  TransformGroup *pTVar4;
  long lVar5;
  
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  pTVar3 = (TransformGroup *)ReflectionUtil::getEntity(*param_2,0x20,"setShapeBones","newRootBone");
  if (param_2[4] == 0) {
    if (pTVar3 == (TransformGroup *)0x0) {
      return;
    }
LAB_007aa13c:
    pTVar4 = (TransformGroup *)0x0;
  }
  else {
    pTVar4 = (TransformGroup *)
             ReflectionUtil::getEntity(param_2[4],0x20,"setShapeBones","oldRootBone");
    if (pTVar3 == (TransformGroup *)0x0) {
      return;
    }
    if (pTVar4 == (TransformGroup *)0x0) {
      if (param_2[4] != 0) {
        return;
      }
      goto LAB_007aa13c;
    }
  }
  bVar1 = true;
  switch(param_2[10]) {
  case 1:
  case 2:
    bVar1 = param_2[8] == 0;
    break;
  case 3:
    bVar1 = *(char *)(param_2 + 8) == '\0';
    break;
  case 4:
    bVar1 = (float)param_2[8] == 0.0;
    break;
  case 5:
    bVar1 = *(double *)(param_2 + 8) == 0.0;
    break;
  default:
    goto switchD_007aa168_caseD_6;
  case 7:
  case 8:
    lVar5 = *(long *)(param_2 + 8);
    goto LAB_007aa1b0;
  case 0xd:
    if (*(long **)(param_2 + 8) == (long *)0x0) {
      bVar1 = false;
      goto switchD_007aa168_caseD_6;
    }
    lVar5 = **(long **)(param_2 + 8);
LAB_007aa1b0:
    bVar1 = lVar5 == 0;
  }
  bVar1 = !bVar1;
switchD_007aa168_caseD_6:
  bVar2 = ScenegraphUtil::setShapeBones(param_1,pTVar3,pTVar4,bVar1,true);
  *(byte *)(param_2 + 0x40) = bVar2 & 1;
  return;
}


