// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6c7b0
// Entry Point: 00d6c7b0
// Size: 632 bytes
// Signature: undefined FUN_00d6c7b0(void)


void FUN_00d6c7b0(long param_1,long param_2,uint *param_3,uint param_4,long param_5,uint *param_6,
                 uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar6 = *param_3;
  if (uVar6 < param_4) {
    lVar7 = *(long *)(param_1 + 0x1f0);
    do {
      if (param_7 <= *param_6) {
        return;
      }
      uVar4 = *(int *)(param_1 + 0x154) - *(int *)(lVar7 + 100);
      if (param_4 - uVar6 <= uVar4) {
        uVar4 = param_4 - uVar6;
      }
      (**(code **)(*(long *)(param_1 + 0x208) + 8))
                (param_1,param_2 + (ulong)uVar6 * 8,lVar7 + 0x10,*(int *)(lVar7 + 100),uVar4);
      *param_3 = *param_3 + uVar4;
      iVar9 = *(int *)(param_1 + 0x154);
      iVar10 = *(int *)(lVar7 + 100) + uVar4;
      iVar5 = *(int *)(lVar7 + 0x60) - uVar4;
      *(int *)(lVar7 + 0x60) = iVar5;
      *(int *)(lVar7 + 100) = iVar10;
      if ((iVar5 == 0) && (iVar10 < iVar9)) {
        iVar5 = *(int *)(param_1 + 0x5c);
        if (0 < iVar5) {
          lVar8 = 0;
          if (iVar9 <= iVar10) goto LAB_00d6c8e0;
          do {
            uVar1 = *(undefined4 *)(param_1 + 0x30);
            iVar5 = iVar10 + -1;
            uVar11 = *(undefined8 *)(lVar7 + lVar8 * 8 + 0x10);
            do {
              jcopy_sample_rows(uVar11,iVar5,uVar11,iVar10,1,uVar1);
              iVar10 = iVar10 + 1;
            } while (iVar9 != iVar10);
            iVar5 = *(int *)(param_1 + 0x5c);
LAB_00d6c8e0:
            do {
              lVar8 = lVar8 + 1;
              if (iVar5 <= lVar8) {
                iVar9 = *(int *)(param_1 + 0x154);
                goto LAB_00d6c91c;
              }
              iVar10 = *(int *)(lVar7 + 100);
              iVar9 = *(int *)(param_1 + 0x154);
            } while (iVar9 <= iVar10);
          } while( true );
        }
LAB_00d6c91c:
        *(int *)(lVar7 + 100) = iVar9;
LAB_00d6c920:
        (**(code **)(*(long *)(param_1 + 0x210) + 8))(param_1,lVar7 + 0x10,0,param_5,*param_6);
        *(undefined4 *)(lVar7 + 100) = 0;
        *param_6 = *param_6 + 1;
        iVar10 = *(int *)(lVar7 + 0x60);
      }
      else {
        if (iVar10 == iVar9) goto LAB_00d6c920;
        iVar10 = *(int *)(lVar7 + 0x60);
      }
      if ((iVar10 == 0) && (uVar6 = *param_6, uVar6 < param_7)) {
        iVar10 = *(int *)(param_1 + 0x5c);
        if (0 < iVar10) {
          lVar7 = 0;
          lVar8 = *(long *)(param_1 + 0x68);
          while( true ) {
            iVar9 = 0;
            if (*(int *)(param_1 + 0x15c) != 0) {
              iVar9 = (*(int *)(lVar8 + 0x28) * *(int *)(lVar8 + 0xc)) / *(int *)(param_1 + 0x15c);
            }
            iVar5 = uVar6 * iVar9;
            if (iVar5 < (int)(iVar9 * param_7)) {
              iVar10 = *(int *)(lVar8 + 0x1c);
              iVar2 = *(int *)(lVar8 + 0x24);
              iVar3 = iVar5 + -1;
              iVar9 = iVar9 * (param_7 - uVar6);
              uVar11 = *(undefined8 *)(param_5 + lVar7 * 8);
              do {
                jcopy_sample_rows(uVar11,iVar3,uVar11,iVar5,1,iVar2 * iVar10);
                iVar5 = iVar5 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
              iVar10 = *(int *)(param_1 + 0x5c);
            }
            lVar7 = lVar7 + 1;
            if (iVar10 <= lVar7) break;
            uVar6 = *param_6;
            lVar8 = lVar8 + 0x60;
          }
        }
        *param_6 = param_7;
        return;
      }
      uVar6 = *param_3;
    } while (uVar6 < param_4);
  }
  return;
}


