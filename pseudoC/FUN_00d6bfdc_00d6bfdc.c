// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6bfdc
// Entry Point: 00d6bfdc
// Size: 184 bytes
// Signature: undefined FUN_00d6bfdc(void)


void FUN_00d6bfdc(long *param_1,long *param_2,undefined8 *param_3,void *param_4)

{
  undefined8 *puVar1;
  code **ppcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)jpeg_alloc_huff_table(param_1);
    *param_2 = (long)puVar1;
  }
  uVar8 = param_3[1];
  uVar7 = *param_3;
  *(undefined *)(puVar1 + 2) = *(undefined *)(param_3 + 2);
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  uVar8 = *(undefined8 *)((long)param_3 + 9);
  uVar7 = *(undefined8 *)((long)param_3 + 1);
  bVar4 = (byte)((ulong)uVar8 >> 0x28);
  bVar3 = (byte)((ulong)uVar7 >> 8);
  bVar5 = (byte)((ulong)uVar7 >> 0x28);
  uVar6 = ((CONCAT12(bVar3,(short)uVar7) & 0xff00ff) & 0xffff) + (uint)(byte)uVar8 +
          (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar7 >> 0x20)) & 0xffff) +
          (CONCAT12(bVar4,(ushort)(byte)((ulong)uVar8 >> 0x20)) & 0xffff) +
          (uint)bVar3 + (uint)(byte)((ulong)uVar8 >> 8) + (uint)bVar5 + (uint)bVar4 +
          (uint)(byte)((ulong)uVar7 >> 0x10) + (uint)(byte)((ulong)uVar8 >> 0x10) +
          (uint)(byte)((ulong)uVar7 >> 0x30) + (uint)(byte)((ulong)uVar8 >> 0x30) +
          (uint)(byte)((ulong)uVar7 >> 0x18) + (uint)(byte)((ulong)uVar8 >> 0x18) +
          (uint)(byte)((ulong)uVar7 >> 0x38) + (uint)(byte)((ulong)uVar8 >> 0x38);
  if (uVar6 - 0x101 < 0xffffff00) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 9;
    (**ppcVar2)(param_1);
  }
  memcpy((void *)(*param_2 + 0x11),param_4,(ulong)uVar6);
  *(undefined *)(*param_2 + 0x111) = 0;
  return;
}


