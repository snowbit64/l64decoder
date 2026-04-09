// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packColorFloat
// Entry Point: 00a9d45c
// Size: 728 bytes
// Signature: undefined __cdecl packColorFloat(float param_1, float param_2, float param_3, float param_4, PIXEL_FORMAT param_5, float * param_6)


/* PixelFormatUtil::packColorFloat(float, float, float, float, PixelFormat::PIXEL_FORMAT, float*) */

void PixelFormatUtil::packColorFloat
               (float param_1,float param_2,float param_3,float param_4,PIXEL_FORMAT param_5,
               float *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = (ushort)((uint)param_1 >> 0x10);
  switch(param_5) {
  case 0x14:
    uVar3 = (uint)param_1 >> 0x17 & 0xff;
    uVar4 = uVar4 & 0x8000;
    iVar2 = uVar3 - 0x70;
    uVar1 = (uint)param_1 & 0x7fffff;
    if (0x6f < uVar3 && iVar2 != 0) {
      if (iVar2 == 0x8f) {
        if (uVar1 != 0) {
          uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
        }
      }
      else if (uVar3 < 0x8f) {
        *(ushort *)param_6 = uVar4 | (ushort)(uVar1 >> 0xd) | (short)iVar2 * 0x400;
        return;
      }
      *(ushort *)param_6 = uVar4 | 0x7c00;
      return;
    }
    if (uVar3 < 0x66) {
      *(undefined2 *)param_6 = 0;
      return;
    }
    *(ushort *)param_6 =
         uVar4 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd);
    return;
  case 0x15:
    break;
  default:
    goto switchD_00a9d47c_caseD_16;
  case 0x17:
    *param_6 = param_1;
    return;
  case 0x1a:
    *param_6 = param_1;
    param_6[1] = param_2;
    param_6[2] = param_3;
    return;
  case 0x1b:
    *param_6 = param_1;
    param_6[1] = param_2;
    param_6[2] = param_3;
    param_6[3] = param_4;
    return;
  }
  uVar3 = (uint)param_1 >> 0x17 & 0xff;
  uVar4 = uVar4 & 0x8000;
  iVar2 = uVar3 - 0x70;
  uVar1 = (uint)param_1 & 0x7fffff;
  if (uVar3 < 0x70 || iVar2 == 0) {
    if (uVar3 < 0x66) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd);
    }
  }
  else {
    if (iVar2 == 0x8f) {
      if (uVar1 != 0) {
        uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
      }
    }
    else if (uVar3 < 0x8f) {
      uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (short)iVar2 * 0x400;
      goto LAB_00a9d5ac;
    }
    uVar4 = uVar4 | 0x7c00;
  }
LAB_00a9d5ac:
  *(ushort *)param_6 = uVar4;
  uVar3 = (uint)param_2 >> 0x17 & 0xff;
  uVar4 = (ushort)((uint)param_2 >> 0x10) & 0x8000;
  iVar2 = uVar3 - 0x70;
  uVar1 = (uint)param_2 & 0x7fffff;
  if (uVar3 < 0x70 || iVar2 == 0) {
    if (uVar3 < 0x66) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd);
    }
  }
  else {
    if (iVar2 == 0x8f) {
      if (uVar1 != 0) {
        uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
      }
    }
    else if (uVar3 < 0x8f) {
      uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (short)iVar2 * 0x400;
      goto LAB_00a9d62c;
    }
    uVar4 = uVar4 | 0x7c00;
  }
LAB_00a9d62c:
  *(ushort *)((long)param_6 + 2) = uVar4;
  uVar3 = (uint)param_3 >> 0x17 & 0xff;
  uVar4 = (ushort)((uint)param_3 >> 0x10) & 0x8000;
  iVar2 = uVar3 - 0x70;
  uVar1 = (uint)param_3 & 0x7fffff;
  if (uVar3 < 0x70 || iVar2 == 0) {
    if (uVar3 < 0x66) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd);
    }
  }
  else {
    if (iVar2 == 0x8f) {
      if (uVar1 != 0) {
        uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
      }
    }
    else if (uVar3 < 0x8f) {
      uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (short)iVar2 * 0x400;
      goto LAB_00a9d6ac;
    }
    uVar4 = uVar4 | 0x7c00;
  }
LAB_00a9d6ac:
  *(ushort *)(param_6 + 1) = uVar4;
  uVar3 = (uint)param_4 >> 0x17 & 0xff;
  uVar4 = (ushort)((uint)param_4 >> 0x10) & 0x8000;
  iVar2 = uVar3 - 0x70;
  uVar1 = (uint)param_4 & 0x7fffff;
  if (uVar3 < 0x70 || iVar2 == 0) {
    if (uVar3 < 0x66) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f)) >> 0xd);
    }
  }
  else {
    if (iVar2 == 0x8f) {
      if (uVar1 != 0) {
        uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
      }
    }
    else if (uVar3 < 0x8f) {
      uVar4 = uVar4 | (ushort)(uVar1 >> 0xd) | (short)iVar2 * 0x400;
      goto LAB_00a9d72c;
    }
    uVar4 = uVar4 | 0x7c00;
  }
LAB_00a9d72c:
  *(ushort *)((long)param_6 + 6) = uVar4;
switchD_00a9d47c_caseD_16:
  return;
}


