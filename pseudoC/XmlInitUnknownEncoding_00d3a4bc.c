// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XmlInitUnknownEncoding
// Entry Point: 00d3a4bc
// Size: 784 bytes
// Signature: undefined XmlInitUnknownEncoding(void)


void * XmlInitUnknownEncoding(void *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  undefined uVar9;
  ulong uVar10;
  long lVar11;
  
  memcpy(param_1,&PTR_FUN_01010f20,0x1d0);
  uVar10 = 0;
  do {
    if (((&DAT_01010fa8)[uVar10] != '\0' && (&DAT_01010fa8)[uVar10] != '\x1c') &&
       (uVar10 != *(uint *)(param_2 + uVar10 * 4))) {
      return (void *)0x0;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x80);
  uVar10 = 0;
  lVar11 = 0x3e3;
  do {
    uVar2 = *(uint *)(param_2 + uVar10 * 4);
    uVar6 = (ulong)uVar2;
    if (uVar2 == 0xffffffff) {
      lVar1 = uVar10 * 2;
      *(undefined *)((long)param_1 + uVar10 + 0x88) = 1;
LAB_00d3a590:
      *(undefined2 *)((long)param_1 + lVar1 + 0x1e0) = 0xffff;
      *(undefined2 *)((long)param_1 + lVar11 + -3) = 1;
    }
    else {
      bVar5 = (byte)uVar2;
      if ((int)uVar2 < 0) {
        if ((param_3 == 0) || (uVar2 < 0xfffffffc)) {
          return (void *)0x0;
        }
        *(byte *)((long)param_1 + uVar10 + 0x88) = '\x03' - bVar5;
        *(undefined *)((long)param_1 + lVar11 + -3) = 0;
        *(undefined2 *)((long)param_1 + uVar10 * 2 + 0x1e0) = 0;
      }
      else {
        if (0x7f < uVar2) {
          uVar8 = uVar2 >> 8;
          if (7 < uVar8 - 0xd8) {
            if (uVar8 == 0xff) {
              if (uVar2 >> 1 != 0x7fff) goto LAB_00d3a678;
            }
            else if ((uVar8 != 0) || ((&DAT_01010fa8)[uVar6] != '\0')) {
LAB_00d3a678:
              if (uVar2 >> 0x10 != 0) {
                return (void *)0x0;
              }
              uVar6 = (ulong)(uVar2 >> 5) & 7;
              uVar4 = 1 << (ulong)(uVar2 & 0x1f);
              if ((*(uint *)(&DAT_0054734c + (uVar6 << 2 | (ulong)(byte)(&DAT_0054784c)[uVar8] << 5)
                            ) & uVar4) == 0) {
                if ((*(uint *)(&DAT_0054734c +
                              (uVar6 << 2 | (ulong)(byte)(&DAT_0054794c)[uVar8] << 5)) & uVar4) == 0
                   ) {
                  *(undefined *)((long)param_1 + uVar10 + 0x88) = 0x1c;
                  bVar7 = (byte)(uVar2 >> 6);
                  goto joined_r0x00d3a74c;
                }
                *(undefined *)((long)param_1 + uVar10 + 0x88) = 0x1a;
                bVar7 = (byte)(uVar2 >> 6);
                if (uVar2 < 0x800) goto LAB_00d3a6b8;
LAB_00d3a700:
                uVar8 = uVar2 >> 6;
                uVar9 = 3;
                *(byte *)((long)param_1 + lVar11 + -2) = (byte)(uVar2 >> 0xc) | 0xe0;
                *(byte *)((long)param_1 + lVar11) = bVar5 & 0x3f | 0x80;
              }
              else {
                *(undefined *)((long)param_1 + uVar10 + 0x88) = 0x16;
                bVar7 = (byte)(uVar2 >> 6);
joined_r0x00d3a74c:
                if (0x7ff < uVar2) goto LAB_00d3a700;
LAB_00d3a6b8:
                uVar9 = 2;
                *(byte *)((long)param_1 + lVar11 + -2) = bVar7 | 0xc0;
                uVar8 = uVar2;
              }
              *(undefined *)((long)param_1 + lVar11 + -3) = uVar9;
              *(byte *)((long)param_1 + lVar11 + -1) = (byte)uVar8 & 0x3f | 0x80;
              *(short *)((long)param_1 + uVar10 * 2 + 0x1e0) = (short)uVar2;
              goto LAB_00d3a598;
            }
          }
          lVar1 = uVar10 << 1;
          *(undefined *)((long)param_1 + uVar10 + 0x88) = 0;
          goto LAB_00d3a590;
        }
        cVar3 = (&DAT_01010fa8)[uVar6];
        if ((cVar3 != '\0' && cVar3 != '\x1c') && uVar10 != uVar6) {
          return (void *)0x0;
        }
        if (uVar2 == 0) {
          uVar2 = 0xffffffff;
        }
        *(char *)((long)param_1 + uVar10 + 0x88) = cVar3;
        *(undefined *)((long)param_1 + lVar11 + -3) = 1;
        *(byte *)((long)param_1 + lVar11 + -2) = bVar5;
        *(short *)((long)param_1 + uVar10 * 2 + 0x1e0) = (short)uVar2;
      }
    }
LAB_00d3a598:
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 4;
    if (uVar10 == 0x100) {
      *(long *)((long)param_1 + 0x1d0) = param_3;
      *(undefined8 *)((long)param_1 + 0x1d8) = param_4;
      if (param_3 != 0) {
        *(code **)((long)param_1 + 0x188) = FUN_00d3a7cc;
        *(code **)((long)param_1 + 400) = FUN_00d3a7cc;
        *(code **)((long)param_1 + 0x198) = FUN_00d3a7cc;
        *(code **)((long)param_1 + 0x1a0) = FUN_00d3a830;
        *(code **)((long)param_1 + 0x1a8) = FUN_00d3a830;
        *(code **)((long)param_1 + 0x1b0) = FUN_00d3a830;
        *(code **)((long)param_1 + 0x1b8) = FUN_00d3a894;
        *(code **)((long)param_1 + 0x1c0) = FUN_00d3a894;
        *(code **)((long)param_1 + 0x1c8) = FUN_00d3a894;
      }
      *(code **)((long)param_1 + 0x70) = FUN_00d3a904;
      *(code **)((long)param_1 + 0x78) = FUN_00d3aae4;
      return param_1;
    }
  } while( true );
}


