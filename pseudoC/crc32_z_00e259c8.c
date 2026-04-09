// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: crc32_z
// Entry Point: 00e259c8
// Size: 764 bytes
// Signature: undefined crc32_z(void)


uint crc32_z(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (param_2 != (uint *)0x0) {
    param_1 = ~param_1;
    puVar2 = param_2;
    uVar3 = param_3;
    if ((param_3 != 0) && (((ulong)param_2 & 3) != 0)) {
      puVar2 = (uint *)((long)param_2 + 1);
      param_1 = *(uint *)(&DAT_0055c44c + (ulong)(param_1 & 0xff ^ (uint)*(byte *)param_2) * 4) ^
                param_1 >> 8;
      uVar3 = param_3 - 1;
      if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
        puVar2 = (uint *)((long)param_2 + 2);
        param_1 = *(uint *)(&DAT_0055c44c +
                           (ulong)(param_1 & 0xff ^ (uint)*(byte *)((long)param_2 + 1)) * 4) ^
                  param_1 >> 8;
        uVar3 = param_3 - 2;
        if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
          puVar2 = (uint *)((long)param_2 + 3);
          param_1 = *(uint *)(&DAT_0055c44c +
                             (ulong)(param_1 & 0xff ^ (uint)*(byte *)((long)param_2 + 2)) * 4) ^
                    param_1 >> 8;
          uVar3 = param_3 - 3;
          if ((uVar3 != 0) && (((ulong)puVar2 & 3) != 0)) {
            param_1 = *(uint *)(&DAT_0055c44c +
                               (ulong)(param_1 & 0xff ^ (uint)*(byte *)((long)param_2 + 3)) * 4) ^
                      param_1 >> 8;
            puVar2 = param_2 + 1;
            uVar3 = param_3 - 4;
          }
        }
      }
    }
    for (; 0x1f < uVar3; uVar3 = uVar3 - 0x20) {
      param_1 = *puVar2 ^ param_1;
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(param_1 >> 0x18) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[5];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[6];
      uVar1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4) ^ puVar2[7];
      param_1 = *(uint *)(&DAT_0055cc4c + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0055d04c + (ulong)(uVar1 & 0xff) * 4) ^
                *(uint *)(&DAT_0055c84c + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0055c44c + (ulong)(uVar1 >> 0x18) * 4);
      puVar2 = puVar2 + 8;
    }
    for (; 3 < uVar3; uVar3 = uVar3 - 4) {
      param_1 = *puVar2 ^ param_1;
      param_1 = *(uint *)(&DAT_0055cc4c + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0055d04c + (ulong)(param_1 & 0xff) * 4) ^
                *(uint *)(&DAT_0055c84c + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0055c44c + (ulong)(param_1 >> 0x18) * 4);
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_1 = *(uint *)(&DAT_0055c44c + (ulong)(param_1 & 0xff ^ (uint)*(byte *)puVar2) * 4) ^
                param_1 >> 8;
      puVar2 = (uint *)((long)puVar2 + 1);
    }
    return ~param_1;
  }
  return 0;
}


