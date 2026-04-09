// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzReadCurrentFile
// Entry Point: 00e326c4
// Size: 684 bytes
// Signature: undefined unzReadCurrentFile(void)


int unzReadCurrentFile(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  if ((param_1 == 0) || (plVar8 = *(long **)(param_1 + 0x140), plVar8 == (long *)0x0)) {
    iVar9 = -0x66;
  }
  else if (*plVar8 == 0) {
    iVar9 = -100;
  }
  else {
    if (param_3 != 0) {
      uVar4 = (ulong)param_3;
      plVar8[4] = param_2;
      *(uint *)(plVar8 + 5) = param_3;
      if (((ulong)plVar8[0x18] < uVar4) && (*(int *)(plVar8 + 0x27) == 0)) {
        param_3 = (uint)plVar8[0x18];
        *(uint *)(plVar8 + 5) = param_3;
      }
      uVar1 = *(uint *)(plVar8 + 2);
      uVar6 = (ulong)uVar1;
      if ((plVar8[0x17] + uVar6 < uVar4) && (*(int *)(plVar8 + 0x27) != 0)) {
        param_3 = uVar1 + (int)plVar8[0x17];
        *(uint *)(plVar8 + 5) = param_3;
      }
      if (param_3 != 0) {
        iVar9 = 0;
        do {
          if (uVar1 == 0) {
            uVar6 = plVar8[0x17];
            if (uVar6 != 0) {
              if (0x3fff < uVar6) {
                uVar6 = 0x4000;
              }
              lVar3 = call_zseek64(plVar8 + 0x19,plVar8[0x24],plVar8[0x26] + plVar8[0xf],0);
              if ((lVar3 != 0) ||
                 (uVar4 = (*(code *)plVar8[0x1a])(plVar8[0x20],plVar8[0x24],*plVar8,uVar6),
                 uVar4 != uVar6)) {
                return -1;
              }
              *(int *)(plVar8 + 2) = (int)uVar6;
              plVar8[1] = *plVar8;
              plVar8[0xf] = plVar8[0xf] + uVar6;
              plVar8[0x17] = plVar8[0x17] - uVar6;
              goto LAB_00e327e8;
            }
            uVar5 = 0;
            lVar3 = plVar8[0x25];
            uVar1 = 0;
            if (lVar3 != 0) goto LAB_00e327f0;
LAB_00e327f8:
            if ((uVar5 == 0) && (plVar8[0x17] == 0)) {
              return iVar9;
            }
            uVar1 = *(uint *)(plVar8 + 5);
            if (uVar5 <= *(uint *)(plVar8 + 5)) {
              uVar1 = uVar5;
            }
            uVar4 = (ulong)uVar1;
            if (uVar1 == 0) {
              uVar4 = 0;
            }
            else {
              uVar6 = 0;
              do {
                *(undefined *)(plVar8[4] + uVar6) = *(undefined *)(plVar8[1] + uVar6);
                uVar6 = uVar6 + 1;
              } while (uVar4 != uVar6);
            }
            plVar8[0x14] = plVar8[0x14] + uVar4;
            lVar3 = crc32(plVar8[0x15],plVar8[4],uVar1);
            iVar9 = uVar1 + iVar9;
            plVar8[0x15] = lVar3;
            plVar8[0x18] = plVar8[0x18] - uVar4;
            *(uint *)(plVar8 + 2) = *(int *)(plVar8 + 2) - uVar1;
            *(uint *)(plVar8 + 5) = *(int *)(plVar8 + 5) - uVar1;
            plVar8[4] = plVar8[4] + uVar4;
            plVar8[1] = plVar8[1] + uVar4;
            plVar8[6] = plVar8[6] + uVar4;
          }
          else {
LAB_00e327e8:
            uVar5 = (uint)uVar6;
            lVar3 = plVar8[0x25];
            uVar1 = uVar5;
            if (lVar3 == 0) goto LAB_00e327f8;
LAB_00e327f0:
            uVar5 = uVar1;
            if (*(int *)(plVar8 + 0x27) != 0) goto LAB_00e327f8;
            if (lVar3 != 0xc) {
              lVar7 = plVar8[6];
              lVar3 = plVar8[4];
              iVar2 = inflate(plVar8 + 1,2);
              if ((-1 < iVar2) && (plVar8[7] != 0)) {
                iVar2 = -3;
              }
              uVar4 = plVar8[6] - lVar7;
              plVar8[0x14] = plVar8[0x14] + uVar4;
              lVar3 = crc32(plVar8[0x15],lVar3,uVar4 & 0xffffffff);
              iVar9 = iVar9 + (int)uVar4;
              plVar8[0x15] = lVar3;
              plVar8[0x18] = plVar8[0x18] - uVar4;
              if (iVar2 != 0) {
                if (iVar2 == 1) {
                  return iVar9;
                }
                return iVar2;
              }
            }
          }
          if (*(int *)(plVar8 + 5) == 0) {
            return iVar9;
          }
          uVar1 = *(uint *)(plVar8 + 2);
          uVar6 = (ulong)uVar1;
        } while( true );
      }
    }
    iVar9 = 0;
  }
  return iVar9;
}


