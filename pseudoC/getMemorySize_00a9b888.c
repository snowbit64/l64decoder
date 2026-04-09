// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemorySize
// Entry Point: 00a9b888
// Size: 672 bytes
// Signature: undefined __cdecl getMemorySize(uint param_1, uint param_2, uint param_3, PIXEL_FORMAT param_4)


/* PixelFormatUtil::getMemorySize(unsigned int, unsigned int, unsigned int,
   PixelFormat::PIXEL_FORMAT) */

uint PixelFormatUtil::getMemorySize(uint param_1,uint param_2,uint param_3,PIXEL_FORMAT param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((byte)s_pixelFormats[(ulong)param_4 * 0x18 + 0xc] >> 1 & 1) == 0) {
    return param_2 * param_1 * param_3 * *(int *)(s_pixelFormats + (ulong)param_4 * 0x18 + 8);
  }
  switch(param_4) {
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0x32:
  case 0x33:
  case 0x36:
    uVar3 = param_2 + 3 >> 2;
    uVar1 = param_1 * 2 + 6 & 0xfffffff8;
    goto LAB_00a9b920;
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x3b:
  case 0x48:
    uVar1 = param_1 * 4 + 0xc;
    uVar3 = param_2 + 3 >> 2;
    break;
  default:
    DebugUtil::message("Error","PixelFormatUtil::getMemorySize: invalid compressed pixel format",
                       (char *)0x0,"T:/src/base/3d/PixelFormatUtil.cpp",0x287);
    return 0;
  case 0x2e:
  case 0x2f:
    uVar1 = param_1 + 7;
    goto LAB_00a9b954;
  case 0x30:
  case 0x31:
    uVar1 = param_1 * 2 + 6;
LAB_00a9b954:
    uVar1 = (uVar1 & 0xfffffff8) * (param_2 + 3 >> 2);
    if (uVar1 < 0x21) {
      uVar1 = 0x20;
    }
    return uVar1;
  case 0x3c:
  case 0x49:
    uVar1 = param_2 + 3 >> 2;
    uVar3 = (param_1 + 4) / 5;
    goto LAB_00a9ba88;
  case 0x3d:
  case 0x4a:
    uVar1 = param_1 + 4;
    uVar4 = 0xcccccccd;
    uVar3 = param_2 + 4;
    goto LAB_00a9b9d4;
  case 0x3e:
  case 0x4b:
    uVar1 = (uint)((ulong)(param_1 + 5) * 0xaaaaaaab >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 4) * 0xcccccccd >> 0x20);
    goto LAB_00a9b9dc;
  case 0x3f:
  case 0x4c:
    uVar1 = param_1 + 5;
    uVar4 = 0xaaaaaaab;
    uVar3 = param_2 + 5;
LAB_00a9b9d4:
    uVar1 = (uint)((ulong)uVar1 * (ulong)uVar4 >> 0x20);
    uVar3 = (uint)((ulong)uVar3 * (ulong)uVar4 >> 0x20);
LAB_00a9b9dc:
    uVar1 = uVar1 >> 2;
LAB_00a9ba50:
    uVar3 = uVar3 >> 2;
LAB_00a9bae8:
    iVar2 = uVar1 * uVar3;
    goto LAB_00a9baec;
  case 0x40:
  case 0x4d:
    return (param_1 * 2 + 0xe & 0xfffffff0) * ((param_2 + 5) / 6);
  case 0x41:
  case 0x4e:
    uVar1 = (uint)((ulong)(param_1 + 9) * 0xcccccccd >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 4) * 0xcccccccd >> 0x20);
    goto LAB_00a9ba4c;
  case 0x42:
  case 0x4f:
    uVar1 = (uint)((ulong)(param_1 + 9) * 0xcccccccd >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 5) * 0xaaaaaaab >> 0x20);
LAB_00a9ba4c:
    uVar1 = uVar1 >> 3;
    goto LAB_00a9ba50;
  case 0x43:
  case 0x50:
    uVar1 = param_1 * 2 + 0xe;
    uVar3 = param_2 + 7 >> 3;
    break;
  case 0x44:
  case 0x51:
    uVar1 = param_2 + 7 >> 3;
    uVar3 = (param_1 + 9) / 10;
LAB_00a9ba88:
    iVar2 = uVar3 * uVar1;
LAB_00a9baec:
    return iVar2 << 4;
  case 0x45:
  case 0x52:
    uVar1 = param_1 + 9;
    uVar4 = 0xcccccccd;
    uVar3 = param_2 + 9;
    goto LAB_00a9bad8;
  case 0x46:
  case 0x53:
    uVar1 = (uint)((ulong)(param_1 + 0xb) * 0xaaaaaaab >> 0x20);
    uVar3 = (uint)((ulong)(param_2 + 9) * 0xcccccccd >> 0x20);
    goto LAB_00a9bae0;
  case 0x47:
  case 0x54:
    uVar1 = param_1 + 0xb;
    uVar4 = 0xaaaaaaab;
    uVar3 = param_2 + 0xb;
LAB_00a9bad8:
    uVar1 = (uint)((ulong)uVar1 * (ulong)uVar4 >> 0x20);
    uVar3 = (uint)((ulong)uVar3 * (ulong)uVar4 >> 0x20);
LAB_00a9bae0:
    uVar1 = uVar1 >> 3;
    uVar3 = uVar3 >> 3;
    goto LAB_00a9bae8;
  }
  uVar1 = uVar1 & 0xfffffff0;
LAB_00a9b920:
  return uVar1 * uVar3;
}


