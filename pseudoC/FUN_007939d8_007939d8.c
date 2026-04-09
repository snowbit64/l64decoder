// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007939d8
// Entry Point: 007939d8
// Size: 360 bytes
// Signature: undefined FUN_007939d8(void)


void FUN_007939d8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  EntityRegistryManager *this;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  plVar4 = (long *)EntityRegistryManager::getEntityById(this,uVar1);
  if ((((plVar4 == (long *)0x0) || ((*(byte *)((long)plVar4 + 0x11) >> 3 & 1) == 0)) ||
      (plVar4[0x2e] == 0)) ||
     (((*(byte *)(plVar4[0x2e] + 0x22) >> 6 & 1) == 0 ||
      (plVar5 = (long *)SplineGeometry::getSpline(), plVar5 == (long *)0x0)))) goto LAB_00793b18;
  local_48 = param_1[8];
  uStack_44 = param_1[0xc];
  local_40 = param_1[0x10];
  if (*(int *)(plVar5 + 6) != 1) {
    bVar6 = false;
    goto LAB_00793ae0;
  }
  plVar7 = (long *)0x0;
  switch(param_1[0x16]) {
  case 1:
  case 2:
    bVar3 = param_1[0x14] == 0;
    break;
  case 3:
    bVar3 = *(char *)(param_1 + 0x14) == '\0';
    break;
  case 4:
    bVar3 = (float)param_1[0x14] == 0.0;
    break;
  case 5:
    bVar3 = *(double *)(param_1 + 0x14) == 0.0;
    break;
  default:
    goto switchD_00793a84_caseD_6;
  case 7:
  case 8:
    lVar8 = *(long *)(param_1 + 0x14);
LAB_00793ad4:
    bVar3 = lVar8 == 0;
    break;
  case 0xd:
    plVar7 = *(long **)(param_1 + 0x14);
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      goto LAB_00793ad4;
    }
    goto switchD_00793a84_caseD_6;
  }
  plVar7 = (long *)(ulong)!bVar3;
switchD_00793a84_caseD_6:
  bVar6 = (byte)plVar7 ^ 1;
LAB_00793ae0:
  SplineUtil::processSplineEpCvMovement
            ((Spline *)plVar5,param_1[4],(bool)bVar6,(Vector3 *)&local_48);
  (**(code **)(*plVar5 + 0x40))(plVar5);
  SplineGeometry::update();
  (**(code **)(*plVar4 + 0x50))(plVar4);
LAB_00793b18:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


