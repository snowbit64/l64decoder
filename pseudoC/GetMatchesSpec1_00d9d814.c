// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMatchesSpec1
// Entry Point: 00d9d814
// Size: 380 bytes
// Signature: undefined GetMatchesSpec1(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined4 param_10)


uint * GetMatchesSpec1(uint param_1,int param_2,int param_3,long param_4,long param_5,uint param_6,
                      uint param_7,int param_8,uint *param_9,uint param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  piVar5 = (int *)(param_5 + (ulong)(param_6 << 1) * 4);
  piVar4 = piVar5 + 1;
  if ((param_8 != 0) && (uVar9 = param_3 - param_2, uVar9 < param_7)) {
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = param_9;
    do {
      lVar10 = param_4 - (ulong)uVar9;
      uVar2 = param_7;
      if (uVar9 <= param_6) {
        uVar2 = 0;
      }
      uVar3 = uVar7;
      if (uVar8 <= uVar7) {
        uVar3 = uVar8;
      }
      uVar11 = (ulong)uVar3;
      piVar1 = (int *)(param_5 + (ulong)(((param_6 - uVar9) + uVar2) * 2) * 4);
      param_9 = puVar6;
      if (*(char *)(lVar10 + uVar11) == *(char *)(param_4 + uVar11)) {
        uVar2 = uVar3 + 1;
        uVar12 = param_1;
        if ((uVar2 != param_1) &&
           (uVar12 = uVar2, *(char *)(lVar10 + (ulong)uVar2) == *(char *)(param_4 + (ulong)uVar2)))
        {
          uVar2 = uVar3 + 2;
          do {
            uVar12 = uVar2;
            if (param_1 == uVar12) {
              uVar12 = param_1;
              if (param_10 < param_1) goto LAB_00d9d8cc;
              goto LAB_00d9d8e8;
            }
            uVar2 = uVar12 + 1;
          } while (*(char *)(lVar10 + (ulong)uVar12) == *(char *)(param_4 + (ulong)uVar12));
        }
        if (param_10 < uVar12) {
LAB_00d9d8cc:
          param_10 = uVar12;
          param_9 = puVar6 + 2;
          *puVar6 = param_10;
          puVar6[1] = uVar9 - 1;
          uVar12 = param_10;
          if (param_10 == param_1) {
            *piVar5 = *piVar1;
            *piVar4 = piVar1[1];
            return param_9;
          }
        }
LAB_00d9d8e8:
        uVar11 = (ulong)uVar12;
      }
      param_8 = param_8 + -1;
      if (*(byte *)(lVar10 + uVar11) < *(byte *)(param_4 + uVar11)) {
        *piVar5 = param_2;
        piVar1 = piVar1 + 1;
        piVar5 = piVar1;
        uVar8 = (uint)uVar11;
      }
      else {
        *piVar4 = param_2;
        piVar4 = piVar1;
        uVar7 = (uint)uVar11;
      }
      if (param_8 == 0) break;
      param_2 = *piVar1;
      uVar9 = param_3 - param_2;
      puVar6 = param_9;
    } while (uVar9 < param_7);
  }
  *piVar5 = 0;
  *piVar4 = 0;
  return param_9;
}


