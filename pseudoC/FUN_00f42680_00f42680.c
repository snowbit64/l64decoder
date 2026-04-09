// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f42680
// Entry Point: 00f42680
// Size: 676 bytes
// Signature: undefined FUN_00f42680(void)


void FUN_00f42680(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  
  if (*param_1 == 0) {
    *param_1 = (long)param_3;
    param_3[4] = 0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 0xc);
    if (puVar4 != (undefined8 *)0x0) {
      fVar6 = (float)param_3[2] + (float)*param_3;
      fVar8 = (float)((ulong)param_3[2] >> 0x20) + (float)((ulong)*param_3 >> 0x20);
      do {
        puVar5 = *(undefined8 **)(param_2 + 10);
        fVar10 = ABS(fVar8 - ((float)((ulong)*puVar4 >> 0x20) + (float)((ulong)puVar4[2] >> 0x20)))
                 + ABS(fVar6 - ((float)*puVar4 + (float)puVar4[2])) +
                 ABS((*(float *)(param_3 + 3) + *(float *)(param_3 + 1)) -
                     (*(float *)(puVar4 + 1) + *(float *)(puVar4 + 3)));
        uVar9 = NEON_fcmge(CONCAT44(fVar10,ABS(fVar8 - ((float)((ulong)*puVar5 >> 0x20) +
                                                       (float)((ulong)puVar5[2] >> 0x20))) +
                                           ABS(fVar6 - ((float)*puVar5 + (float)puVar5[2])) +
                                           ABS((*(float *)(param_3 + 3) + *(float *)(param_3 + 1)) -
                                               (*(float *)(puVar5 + 1) + *(float *)(puVar5 + 3)))),
                           CONCAT44(fVar10,fVar10),4);
        param_2 = *(undefined4 **)((long)(param_2 + 10) + (uVar9 & 1) * 8);
        puVar4 = *(undefined8 **)(param_2 + 0xc);
      } while (puVar4 != (undefined8 *)0x0);
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar5 = *(undefined8 **)(param_2 + 8);
    if (puVar4 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
    }
    else {
      param_1[1] = 0;
    }
    puVar4[5] = 0;
    puVar4[6] = 0;
    uVar7 = *(undefined4 *)param_3;
    puVar4[4] = puVar5;
    uVar7 = NEON_fminnm(uVar7,*param_2);
    *(undefined4 *)puVar4 = uVar7;
    fVar6 = *(float *)(param_3 + 2);
    if (*(float *)(param_3 + 2) <= (float)param_2[4]) {
      fVar6 = (float)param_2[4];
    }
    *(float *)(puVar4 + 2) = fVar6;
    uVar7 = NEON_fminnm(*(undefined4 *)((long)param_3 + 4),param_2[1]);
    *(undefined4 *)((long)puVar4 + 4) = uVar7;
    fVar6 = *(float *)((long)param_3 + 0x14);
    if (*(float *)((long)param_3 + 0x14) <= (float)param_2[5]) {
      fVar6 = (float)param_2[5];
    }
    *(float *)((long)puVar4 + 0x14) = fVar6;
    uVar7 = NEON_fminnm(*(undefined4 *)(param_3 + 1),param_2[2]);
    *(undefined4 *)(puVar4 + 1) = uVar7;
    fVar6 = *(float *)(param_3 + 3);
    if (*(float *)(param_3 + 3) <= (float)param_2[6]) {
      fVar6 = (float)param_2[6];
    }
    *(float *)(puVar4 + 3) = fVar6;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4[5] = param_2;
      *(undefined8 **)(param_2 + 8) = puVar4;
      puVar4[6] = param_3;
      param_3[4] = puVar4;
      *param_1 = (long)puVar4;
    }
    else {
      puVar5[(ulong)(*(undefined4 **)(*(long *)(param_2 + 8) + 0x30) == param_2) + 5] = puVar4;
      fVar6 = *(float *)puVar4;
      puVar4[5] = param_2;
      *(undefined8 **)(param_2 + 8) = puVar4;
      puVar4[6] = param_3;
      param_3[4] = puVar4;
      do {
        if ((((*(float *)puVar5 <= fVar6) &&
             (*(float *)((long)puVar5 + 4) <= *(float *)((long)puVar4 + 4))) &&
            (*(float *)(puVar5 + 1) <= *(float *)(puVar4 + 1))) &&
           (((*(float *)(puVar4 + 2) <= *(float *)(puVar5 + 2) &&
             (*(float *)((long)puVar4 + 0x14) <= *(float *)((long)puVar5 + 0x14))) &&
            (*(float *)(puVar4 + 3) <= *(float *)(puVar5 + 3))))) {
          return;
        }
        puVar2 = (undefined4 *)puVar5[5];
        puVar3 = (undefined4 *)puVar5[6];
        puVar1 = puVar5 + 4;
        fVar6 = (float)NEON_fminnm(*puVar2,*puVar3);
        *(float *)puVar5 = fVar6;
        fVar8 = (float)puVar2[4];
        if ((float)puVar2[4] <= (float)puVar3[4]) {
          fVar8 = (float)puVar3[4];
        }
        *(float *)(puVar5 + 2) = fVar8;
        uVar7 = NEON_fminnm(puVar2[1],puVar3[1]);
        *(undefined4 *)((long)puVar5 + 4) = uVar7;
        fVar8 = (float)puVar2[5];
        if ((float)puVar2[5] <= (float)puVar3[5]) {
          fVar8 = (float)puVar3[5];
        }
        *(float *)((long)puVar5 + 0x14) = fVar8;
        uVar7 = NEON_fminnm(puVar2[2],puVar3[2]);
        *(undefined4 *)(puVar5 + 1) = uVar7;
        fVar8 = (float)puVar2[6];
        if ((float)puVar2[6] <= (float)puVar3[6]) {
          fVar8 = (float)puVar3[6];
        }
        *(float *)(puVar5 + 3) = fVar8;
        puVar4 = puVar5;
        puVar5 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    }
  }
  return;
}


