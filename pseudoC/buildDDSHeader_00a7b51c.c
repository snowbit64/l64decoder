// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildDDSHeader
// Entry Point: 00a7b51c
// Size: 1224 bytes
// Signature: undefined __cdecl buildDDSHeader(ImageDesc * param_1, DDSHeader * param_2, DDSHeaderDX10 * param_3, bool * param_4)


/* DDSUtil::buildDDSHeader(ImageDesc const&, DDSUtil::DDSHeader&, DDSUtil::DDSHeaderDX10&, bool&) */

undefined4
DDSUtil::buildDDSHeader(ImageDesc *param_1,DDSHeader *param_2,DDSHeaderDX10 *param_3,bool *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ImageDesc IVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  *param_4 = false;
  if (iVar3 == 3) {
    cVar6 = '\x01';
    *param_4 = true;
    if (*(uint *)(param_1 + 0xc) < 2) {
      return 0;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x18) != 1) || (2 < *(uint *)(param_1 + 0x14))) &&
       ((*(int *)(param_1 + 0x18) != 3 || (*(uint *)(param_1 + 0x14) != 1)))) {
      cVar6 = '\0';
      if ((0x10 < *(uint *)(param_1 + 0x40)) ||
         ((1 << (ulong)(*(uint *)(param_1 + 0x40) & 0x1f) & 0x1c040U) == 0)) goto LAB_00a7b59c;
    }
    cVar6 = '\x01';
    *param_4 = true;
  }
LAB_00a7b59c:
  IVar5 = param_1[0x49];
  *(undefined4 *)param_2 = 0x7c;
  uVar10 = *(undefined8 *)param_1;
  *(undefined4 *)(param_2 + 0x48) = 0x20;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0x1000;
  uVar10 = NEON_rev64(uVar10,4);
  *(undefined8 *)(param_2 + 8) = uVar10;
  if (IVar5 == (ImageDesc)0x0) {
    uVar7 = 0;
    IVar5 = param_1[0x50];
  }
  else {
    uVar7 = 2;
    *(undefined4 *)(param_2 + 0x1c) = 0x288ae8d9;
    *(undefined4 *)(param_2 + 0x24) = 2;
    IVar5 = param_1[0x50];
  }
  if (IVar5 != (ImageDesc)0x0) {
    uVar7 = uVar7 | 0x10;
    *(undefined4 *)(param_2 + 0x1c) = 0x288ae8d9;
    *(uint *)(param_2 + 0x24) = uVar7;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0x288ae8d9;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 == 0) {
    uVar8 = 0x1008;
  }
  else {
    uVar8 = 0x401008;
    *(undefined4 *)(param_2 + 0x68) = 0x401000;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  *(int *)(param_2 + 0x18) = iVar9 + 1;
  *(undefined4 *)(param_2 + 4) = 0x21007;
  if ((iVar4 == 9) || (iVar4 == 7)) {
    iVar9 = 0x10;
    if (iVar4 != 9) {
      iVar9 = 8;
    }
    uVar1 = *(uint *)param_1;
    uVar2 = *(uint *)(param_1 + 4);
    *(undefined4 *)(param_2 + 4) = 0xa1007;
    *(uint *)(param_2 + 0x10) = (uVar1 >> 2) * iVar9 * (uVar2 >> 2);
  }
  if (iVar3 == 1) {
    *(undefined4 *)(param_2 + 0x68) = uVar8;
    *(undefined4 *)(param_2 + 0x6c) = 0xfe00;
  }
  if (param_1[0x51] != (ImageDesc)0x0) {
    *(undefined4 *)(param_2 + 0x1c) = 0x288ae8d9;
    *(uint *)(param_2 + 0x24) = uVar7 | 8;
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x28) = uVar10;
    cVar6 = *param_4;
  }
  if (cVar6 != '\0') {
    iVar3 = *(int *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x4c) = 0x3031584400000004;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    switch(iVar3) {
    case 7:
      uVar8 = 0x47;
      break;
    default:
      switch(*(undefined4 *)(param_1 + 0x18)) {
      case 1:
        iVar9 = *(int *)(param_1 + 0x14);
        if (iVar9 == 4) {
          if (iVar3 == 6) {
            uVar8 = 0x57;
          }
          else {
            uVar8 = 0x1c;
          }
        }
        else if (iVar9 == 2) {
          uVar8 = 0x31;
        }
        else {
          if (iVar9 != 1) {
            return 0;
          }
          uVar8 = 0x3d;
        }
        break;
      default:
        return 0;
      case 3:
        if (*(int *)(param_1 + 0x14) != 1) {
          return 0;
        }
        uVar8 = 0x38;
        break;
      case 6:
        iVar9 = *(int *)(param_1 + 0x14);
        if (iVar9 == 4) {
          uVar8 = 10;
        }
        else if (iVar9 == 2) {
          uVar8 = 0x22;
        }
        else {
          if (iVar9 != 1) {
            return 0;
          }
          uVar8 = 0x36;
        }
        break;
      case 8:
        iVar9 = *(int *)(param_1 + 0x14);
        if (iVar9 == 4) {
          uVar8 = 2;
        }
        else if (iVar9 == 2) {
          uVar8 = 0x10;
        }
        else {
          if (iVar9 != 1) {
            return 0;
          }
          uVar8 = 0x29;
        }
      }
      break;
    case 9:
      uVar8 = 0x4d;
      break;
    case 10:
      uVar8 = 0x50;
      break;
    case 0xb:
      uVar8 = 0x51;
      break;
    case 0xc:
      uVar8 = 0x53;
      break;
    case 0xd:
      uVar8 = 0x54;
      break;
    case 0xe:
      uVar8 = 0x5f;
      break;
    case 0xf:
      uVar8 = 0x60;
      break;
    case 0x10:
      uVar8 = 0x62;
    }
    *(undefined4 *)param_3 = uVar8;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 4) = 3;
    if (iVar3 != 0x10) {
      return 1;
    }
    if (*(int *)(param_1 + 0x14) != 4) {
      return 1;
    }
    *(undefined4 *)(param_2 + 0x1c) = 0x288ae8d9;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | 4;
    return 1;
  }
  if (*(int *)(param_1 + 0x40) == 9) {
    uVar10 = 0x3554584400000004;
  }
  else {
    if (*(int *)(param_1 + 0x40) != 7) {
      switch(*(undefined4 *)(param_1 + 0x18)) {
      case 1:
        if (*(int *)(param_1 + 0x14) == 3) {
          *(undefined4 *)(param_2 + 0x4c) = 0x40;
          *(undefined8 *)(param_2 + 0x5c) = 0xff00000000ff00;
          *(undefined8 *)(param_2 + 0x54) = 0xff00000018;
          return 1;
        }
        if (*(int *)(param_1 + 0x14) != 4) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x4c) = 0x41;
        *(undefined4 *)(param_2 + 100) = 0xff000000;
        *(undefined8 *)(param_2 + 0x5c) = 0xff00000000ff00;
        *(undefined8 *)(param_2 + 0x54) = 0xff00000020;
        return 1;
      default:
        return 1;
      case 3:
        if (*(int *)(param_1 + 0x14) == 1) {
          *(undefined4 *)(param_2 + 0x4c) = 0x40;
          *(undefined8 *)(param_2 + 0x54) = 0xff00000010;
          return 1;
        }
        return 1;
      case 6:
        iVar3 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(param_2 + 0x4c) = 4;
        if (iVar3 == 4) {
          uVar8 = 0x71;
        }
        else {
          if (iVar3 != 2) {
            if (iVar3 != 1) {
              return 0;
            }
            uVar8 = 0x6f;
LAB_00a7b8f0:
            *(undefined4 *)(param_2 + 0x50) = uVar8;
            return 1;
          }
          uVar8 = 0x70;
        }
        break;
      case 8:
        iVar3 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(param_2 + 0x4c) = 4;
        if (iVar3 == 4) {
          uVar8 = 0x74;
        }
        else {
          if (iVar3 != 2) {
            if (iVar3 != 1) {
              return 0;
            }
            uVar8 = 0x72;
            goto LAB_00a7b8f0;
          }
          uVar8 = 0x73;
        }
      }
      *(undefined4 *)(param_2 + 0x50) = uVar8;
      return 1;
    }
    uVar10 = 0x3154584400000004;
  }
  *(undefined8 *)(param_2 + 0x4c) = uVar10;
  return 1;
}


