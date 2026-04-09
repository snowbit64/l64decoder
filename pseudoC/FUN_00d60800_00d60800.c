// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d60800
// Entry Point: 00d60800
// Size: 1132 bytes
// Signature: undefined FUN_00d60800(void)


void FUN_00d60800(long *param_1,byte *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  int iVar5;
  long lVar6;
  char **ppcVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  bVar2 = *param_2;
  lVar13 = param_1[0x44];
  lVar10 = *(long *)(jpeg_aritab + ((ulong)bVar2 & 0x7f) * 8);
  lVar6 = lVar10 >> 0x10;
  lVar12 = *(long *)(lVar13 + 0x20) - lVar6;
  *(long *)(lVar13 + 0x20) = lVar12;
  if (param_3 == bVar2 >> 7) {
    if (0x7fff < lVar12) {
      return;
    }
    if (lVar12 < lVar6) {
      *(long *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) + lVar12;
      *(long *)(lVar13 + 0x20) = lVar6;
    }
    bVar2 = (byte)((ulong)lVar10 >> 8) ^ bVar2 & 0x80;
  }
  else {
    if (lVar6 <= lVar12) {
      *(long *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) + lVar12;
      *(long *)(lVar13 + 0x20) = lVar6;
    }
    bVar2 = (byte)lVar10 ^ bVar2 & 0x80;
  }
  *param_2 = bVar2;
  uVar14 = *(ulong *)(lVar13 + 0x18);
  lVar6 = *(long *)(lVar13 + 0x20);
  iVar5 = *(int *)(lVar13 + 0x38);
  do {
    lVar6 = lVar6 << 1;
    uVar14 = uVar14 * 2;
    iVar5 = iVar5 + -1;
    *(ulong *)(lVar13 + 0x18) = uVar14;
    *(long *)(lVar13 + 0x20) = lVar6;
    *(int *)(lVar13 + 0x38) = iVar5;
    if (iVar5 == 0) {
      if ((long)uVar14 < 0x8000000) {
        if ((long)uVar14 >> 0x13 == 0xff) {
          *(long *)(lVar13 + 0x28) = *(long *)(lVar13 + 0x28) + 1;
        }
        else {
          iVar5 = *(int *)(lVar13 + 0x3c);
          if (iVar5 == 0) {
            *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
          }
          else if (-1 < iVar5) {
            if (*(long *)(lVar13 + 0x30) != 0) {
              do {
                puVar3 = (undefined8 *)param_1[5];
                puVar8 = (undefined *)*puVar3;
                *puVar3 = puVar8 + 1;
                *puVar8 = 0;
                lVar6 = puVar3[1];
                puVar3[1] = lVar6 + -1;
                if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
                  ppcVar4 = (code **)*param_1;
                  *(undefined4 *)(ppcVar4 + 5) = 0x19;
                  (**ppcVar4)(param_1);
                }
                lVar6 = *(long *)(lVar13 + 0x30) + -1;
                *(long *)(lVar13 + 0x30) = lVar6;
              } while (lVar6 != 0);
              iVar5 = *(int *)(lVar13 + 0x3c);
            }
            plVar9 = (long *)param_1[5];
            puVar8 = (undefined *)*plVar9;
            *plVar9 = (long)(puVar8 + 1);
            *puVar8 = (char)iVar5;
            lVar6 = plVar9[1];
            plVar9[1] = lVar6 + -1;
            if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)plVar9[3])(param_1), cVar1 == '\0')) {
              ppcVar4 = (code **)*param_1;
              *(undefined4 *)(ppcVar4 + 5) = 0x19;
              (**ppcVar4)(param_1);
            }
          }
          if (*(long *)(lVar13 + 0x28) != 0) {
            lVar6 = *(long *)(lVar13 + 0x30);
            while (lVar6 != 0) {
              puVar3 = (undefined8 *)param_1[5];
              puVar8 = (undefined *)*puVar3;
              *puVar3 = puVar8 + 1;
              *puVar8 = 0;
              lVar6 = puVar3[1];
              puVar3[1] = lVar6 + -1;
              if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
                ppcVar4 = (code **)*param_1;
                *(undefined4 *)(ppcVar4 + 5) = 0x19;
                (**ppcVar4)(param_1);
              }
              lVar6 = *(long *)(lVar13 + 0x30) + -1;
              *(long *)(lVar13 + 0x30) = lVar6;
            }
            do {
              puVar3 = (undefined8 *)param_1[5];
              puVar8 = (undefined *)*puVar3;
              *puVar3 = puVar8 + 1;
              *puVar8 = 0xff;
              lVar6 = puVar3[1];
              puVar3[1] = lVar6 + -1;
              if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
                ppcVar4 = (code **)*param_1;
                *(undefined4 *)(ppcVar4 + 5) = 0x19;
                (**ppcVar4)(param_1);
              }
              puVar3 = (undefined8 *)param_1[5];
              puVar8 = (undefined *)*puVar3;
              *puVar3 = puVar8 + 1;
              *puVar8 = 0;
              lVar6 = puVar3[1];
              puVar3[1] = lVar6 + -1;
              if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
                ppcVar4 = (code **)*param_1;
                *(undefined4 *)(ppcVar4 + 5) = 0x19;
                (**ppcVar4)(param_1);
              }
              lVar6 = *(long *)(lVar13 + 0x28) + -1;
              *(long *)(lVar13 + 0x28) = lVar6;
            } while (lVar6 != 0);
          }
          *(uint *)(lVar13 + 0x3c) = (uint)uVar14 >> 0x13 & 0xff;
        }
      }
      else {
        iVar5 = *(int *)(lVar13 + 0x3c);
        if (-1 < iVar5) {
          if (*(long *)(lVar13 + 0x30) != 0) {
            do {
              puVar3 = (undefined8 *)param_1[5];
              puVar8 = (undefined *)*puVar3;
              *puVar3 = puVar8 + 1;
              *puVar8 = 0;
              lVar6 = puVar3[1];
              puVar3[1] = lVar6 + -1;
              if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
                ppcVar4 = (code **)*param_1;
                *(undefined4 *)(ppcVar4 + 5) = 0x19;
                (**ppcVar4)(param_1);
              }
              lVar6 = *(long *)(lVar13 + 0x30) + -1;
              *(long *)(lVar13 + 0x30) = lVar6;
            } while (lVar6 != 0);
            iVar5 = *(int *)(lVar13 + 0x3c);
          }
          ppcVar7 = (char **)param_1[5];
          pcVar11 = *ppcVar7;
          *ppcVar7 = pcVar11 + 1;
          *pcVar11 = (char)iVar5 + '\x01';
          pcVar11 = ppcVar7[1];
          ppcVar7[1] = pcVar11 + -1;
          if ((pcVar11 + -1 == (char *)0x0) &&
             (cVar1 = (*(code *)ppcVar7[3])(param_1), cVar1 == '\0')) {
            ppcVar4 = (code **)*param_1;
            *(undefined4 *)(ppcVar4 + 5) = 0x19;
            (**ppcVar4)(param_1);
            iVar5 = *(int *)(lVar13 + 0x3c);
          }
          else {
            iVar5 = *(int *)(lVar13 + 0x3c);
          }
          if (iVar5 == 0xfe) {
            puVar3 = (undefined8 *)param_1[5];
            puVar8 = (undefined *)*puVar3;
            *puVar3 = puVar8 + 1;
            *puVar8 = 0;
            lVar6 = puVar3[1];
            puVar3[1] = lVar6 + -1;
            if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
              ppcVar4 = (code **)*param_1;
              *(undefined4 *)(ppcVar4 + 5) = 0x19;
              (**ppcVar4)(param_1);
            }
          }
        }
        lVar6 = *(long *)(lVar13 + 0x28);
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + lVar6;
        *(uint *)(lVar13 + 0x3c) = (uint)uVar14 >> 0x13 & 0xff;
      }
      lVar6 = *(long *)(lVar13 + 0x20);
      uVar14 = *(ulong *)(lVar13 + 0x18) & 0x7ffff;
      iVar5 = *(int *)(lVar13 + 0x38) + 8;
      *(ulong *)(lVar13 + 0x18) = uVar14;
      *(int *)(lVar13 + 0x38) = iVar5;
    }
  } while (lVar6 < 0x8000);
  return;
}


