// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975c44
// Entry Point: 00975c44
// Size: 544 bytes
// Signature: undefined FUN_00975c44(void)


void FUN_00975c44(undefined (*param_1) [16],undefined (*param_2) [16])

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined (*pauVar10) [16];
  long lVar11;
  int iVar12;
  long lVar13;
  undefined auVar14 [16];
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if (uVar5 < 6) {
    bVar4 = true;
    switch(uVar5) {
    default:
      goto switchD_00975c9c_caseD_0;
    case 2:
      puVar9 = (undefined8 *)(param_2[-1] + 8);
      uVar5 = FUN_009758e8(puVar9,param_1);
      if ((uVar5 & 1) != 0) {
        bVar4 = true;
        uVar8 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = *puVar9;
        *puVar9 = uVar8;
        goto switchD_00975c9c_caseD_0;
      }
      break;
    case 3:
      FUN_00975a08(param_1,*param_1 + 8,param_2[-1] + 8);
      break;
    case 4:
      puVar1 = *param_1 + 8;
      pauVar6 = param_1 + 1;
      puVar9 = (undefined8 *)(param_2[-1] + 8);
      FUN_00975a08(param_1,puVar1,pauVar6);
      uVar5 = FUN_009758e8(puVar9,pauVar6);
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)*pauVar6;
        *(undefined8 *)*pauVar6 = *puVar9;
        *puVar9 = uVar8;
        uVar5 = FUN_009758e8(pauVar6,puVar1);
        if ((uVar5 & 1) != 0) {
          auVar14 = NEON_ext(*(undefined (*) [16])(*param_1 + 8),*(undefined (*) [16])(*param_1 + 8)
                             ,8,1);
          *(long *)param_1[1] = auVar14._8_8_;
          *(long *)(*param_1 + 8) = auVar14._0_8_;
          uVar5 = FUN_009758e8(puVar1,param_1);
          if ((uVar5 & 1) != 0) {
            bVar4 = true;
            auVar14 = NEON_ext(*param_1,*param_1,8,1);
            *(long *)(*param_1 + 8) = auVar14._8_8_;
            *(long *)*param_1 = auVar14._0_8_;
            goto switchD_00975c9c_caseD_0;
          }
        }
      }
      break;
    case 5:
      FUN_00975aec(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_2[-1] + 8);
    }
  }
  else {
    FUN_00975a08(param_1,*param_1 + 8,param_1 + 1);
    if ((undefined (*) [16])(param_1[1] + 8) != param_2) {
      lVar11 = 0;
      iVar12 = 0;
      pauVar6 = (undefined (*) [16])(param_1[1] + 8);
      pauVar10 = param_1 + 1;
      do {
        pauVar7 = pauVar6;
        uVar5 = FUN_009758e8(pauVar7,pauVar10);
        if ((uVar5 & 1) != 0) {
          local_60 = *(undefined8 *)*pauVar7;
          lVar3 = lVar11;
          do {
            lVar13 = lVar3;
            *(undefined8 *)(param_1[1] + lVar13 + 8) = *(undefined8 *)(param_1[1] + lVar13);
            pauVar6 = param_1;
            if (lVar13 == -0x10) goto LAB_00975d10;
            uVar5 = FUN_009758e8(&local_60,*param_1 + lVar13 + 8);
            lVar3 = lVar13 + -8;
          } while ((uVar5 & 1) != 0);
          pauVar6 = (undefined (*) [16])(param_1[1] + lVar13);
LAB_00975d10:
          iVar12 = iVar12 + 1;
          *(undefined8 *)*pauVar6 = local_60;
          if (iVar12 == 8) {
            bVar4 = (undefined (*) [16])(*pauVar7 + 8) == param_2;
            goto switchD_00975c9c_caseD_0;
          }
        }
        lVar11 = lVar11 + 8;
        pauVar6 = (undefined (*) [16])(*pauVar7 + 8);
        pauVar10 = pauVar7;
      } while ((undefined (*) [16])(*pauVar7 + 8) != param_2);
    }
  }
  bVar4 = true;
switchD_00975c9c_caseD_0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


