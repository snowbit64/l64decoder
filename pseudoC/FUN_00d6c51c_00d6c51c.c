// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6c51c
// Entry Point: 00d6c51c
// Size: 660 bytes
// Signature: undefined FUN_00d6c51c(void)


void FUN_00d6c51c(long param_1,long param_2,uint *param_3,uint param_4,undefined8 param_5,
                 uint *param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if (*param_6 < param_7) {
    lVar9 = *(long *)(param_1 + 0x1f0);
    iVar4 = *(int *)(param_1 + 0x154) * 3;
    do {
      uVar1 = *param_3;
      if (uVar1 < param_4) {
        uVar3 = *(int *)(lVar9 + 0x6c) - *(int *)(lVar9 + 100);
        if (param_4 - uVar1 <= uVar3) {
          uVar3 = param_4 - uVar1;
        }
        (**(code **)(*(long *)(param_1 + 0x208) + 8))
                  (param_1,param_2 + (ulong)uVar1 * 8,lVar9 + 0x10,*(int *)(lVar9 + 100),uVar3);
        if (((*(int *)(lVar9 + 0x60) == *(int *)(param_1 + 0x34)) &&
            (iVar7 = *(int *)(param_1 + 0x5c), 0 < iVar7)) &&
           (iVar8 = *(int *)(param_1 + 0x154), 0 < iVar8)) {
          lVar10 = 0;
          do {
            if (0 < iVar8) {
              iVar7 = 0;
              iVar6 = -1;
              do {
                uVar5 = *(undefined8 *)(lVar9 + lVar10 * 8 + 0x10);
                jcopy_sample_rows(uVar5,0,uVar5,iVar6,1,*(undefined4 *)(param_1 + 0x30));
                iVar8 = *(int *)(param_1 + 0x154);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar7 < iVar8);
              iVar7 = *(int *)(param_1 + 0x5c);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar7);
        }
        *param_3 = *param_3 + uVar3;
        iVar8 = *(int *)(lVar9 + 0x6c);
        iVar7 = *(int *)(lVar9 + 100) + uVar3;
        *(uint *)(lVar9 + 0x60) = *(int *)(lVar9 + 0x60) - uVar3;
        *(int *)(lVar9 + 100) = iVar7;
LAB_00d6c718:
        if (iVar7 == iVar8) goto LAB_00d6c734;
      }
      else {
        if (*(int *)(lVar9 + 0x60) != 0) {
          return;
        }
        iVar7 = *(int *)(lVar9 + 100);
        iVar8 = *(int *)(lVar9 + 0x6c);
        if (iVar8 <= iVar7) goto LAB_00d6c718;
        iVar6 = *(int *)(param_1 + 0x5c);
        if (0 < iVar6) {
          lVar10 = 0;
          if (iVar8 <= iVar7) goto LAB_00d6c6d8;
          do {
            uVar2 = *(undefined4 *)(param_1 + 0x30);
            iVar6 = iVar7 + -1;
            uVar5 = *(undefined8 *)(lVar9 + lVar10 * 8 + 0x10);
            do {
              jcopy_sample_rows(uVar5,iVar6,uVar5,iVar7,1,uVar2);
              iVar7 = iVar7 + 1;
            } while (iVar8 != iVar7);
            iVar6 = *(int *)(param_1 + 0x5c);
LAB_00d6c6d8:
            do {
              lVar10 = lVar10 + 1;
              if (iVar6 <= lVar10) {
                iVar8 = *(int *)(lVar9 + 0x6c);
                goto LAB_00d6c72c;
              }
              iVar7 = *(int *)(lVar9 + 100);
              iVar8 = *(int *)(lVar9 + 0x6c);
            } while (iVar8 <= iVar7);
          } while( true );
        }
LAB_00d6c72c:
        *(int *)(lVar9 + 100) = iVar8;
LAB_00d6c734:
        (**(code **)(*(long *)(param_1 + 0x210) + 8))
                  (param_1,lVar9 + 0x10,*(undefined4 *)(lVar9 + 0x68),param_5,*param_6);
        *param_6 = *param_6 + 1;
        iVar8 = *(int *)(lVar9 + 100);
        iVar6 = *(int *)(param_1 + 0x154);
        iVar7 = *(int *)(lVar9 + 0x68) + iVar6;
        if (iVar4 <= iVar7) {
          iVar7 = 0;
        }
        *(int *)(lVar9 + 0x68) = iVar7;
        if (iVar4 <= iVar8) {
          iVar8 = 0;
          *(undefined4 *)(lVar9 + 100) = 0;
        }
        *(int *)(lVar9 + 0x6c) = iVar8 + iVar6;
      }
    } while (*param_6 < param_7);
  }
  return;
}


