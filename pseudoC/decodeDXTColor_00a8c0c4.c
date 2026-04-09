// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeDXTColor
// Entry Point: 00a8c0c4
// Size: 456 bytes
// Signature: undefined __cdecl decodeDXTColor(uchar * param_1, uint param_2, uint param_3, int param_4, int param_5, uchar * param_6)


/* DXTUtil::decodeDXTColor(unsigned char const*, unsigned int, unsigned int, int, int, unsigned
   char*) */

void DXTUtil::decodeDXTColor
               (uchar *param_1,uint param_2,uint param_3,int param_4,int param_5,uchar *param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined2 *puVar13;
  byte local_24;
  undefined2 local_23;
  undefined local_21;
  byte local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined2 local_1b;
  undefined local_19;
  long local_18;
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  uVar1 = *(ushort *)param_1;
  uVar2 = *(ushort *)(param_1 + 2);
  uVar6 = (uint)(uVar1 >> 3);
  uVar10 = (byte)(uVar1 >> 8) & 0xf8;
  uVar7 = (uint)(uVar2 >> 3);
  uVar9 = (uint)uVar1 << 3;
  uVar12 = (byte)(uVar2 >> 8) & 0xf8;
  uVar4 = (uint)uVar2 << 3;
  local_23._1_1_ = (char)uVar9;
  local_24 = (byte)uVar10;
  local_23._0_1_ = (byte)(uVar1 >> 3) & 0xfc;
  local_21 = (char)uVar12;
  local_20 = (byte)(uVar2 >> 3) & 0xfc;
  local_1f = (char)uVar4;
  if ((uint)uVar1 < (uint)uVar2 || uVar1 == uVar2) {
    local_19 = 0;
    local_1e = (char)((uVar10 | 1) + uVar12 >> 1);
    local_1c = (undefined)((uVar9 & 0xff | 1) + (uVar4 & 0xff) >> 1);
    local_1b = 0;
    local_1d = (char)((uVar6 & 0xfc | 1) + (uVar7 & 0xfc) >> 1);
  }
  else {
    local_1e = (char)(((uVar12 | 1) + uVar10 * 2) / 3);
    local_1c = (undefined)(((uVar4 & 0xff | 1) + (uVar9 & 0xff) * 2) / 3);
    local_1d = (char)(((uVar7 & 0xfc | 1) + (uVar6 & 0xfc) * 2) / 3);
    local_19 = (undefined)(((uVar9 & 0xff | 1) + (uVar4 & 0xff) * 2) / 3);
    local_1b = CONCAT11((char)(((uVar6 & 0xfc | 1) + (uVar7 & 0xfc) * 2) / 3),
                        (char)(((uVar10 | 1) + uVar12 * 2) / 3));
  }
  if (param_3 != 0) {
    uVar10 = 0;
    uVar11 = 0;
    do {
      if (param_2 != 0) {
        uVar12 = (uint)param_1[uVar11 + 4];
        puVar13 = (undefined2 *)(param_6 + (ulong)uVar10 + 1);
        uVar9 = param_2;
        do {
          uVar4 = uVar12 & 3;
          uVar12 = uVar12 >> 2;
          uVar9 = uVar9 - 1;
          lVar8 = (ulong)uVar4 * 3;
          uVar3 = *(undefined2 *)(&local_24 + lVar8 + 1);
          *(byte *)((long)puVar13 + -1) = (&local_24)[lVar8];
          *puVar13 = uVar3;
          puVar13 = (undefined2 *)((long)puVar13 + (long)param_4);
        } while (uVar9 != 0);
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + param_5;
    } while (uVar11 != param_3);
  }
  if (*(long *)(lVar5 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


