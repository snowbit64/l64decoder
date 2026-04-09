// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressImage
// Entry Point: 00a7af48
// Size: 756 bytes
// Signature: undefined __cdecl decompressImage(ImageDesc * param_1, ImageDesc * param_2)


/* DDSUtil::decompressImage(ImageDesc const&, ImageDesc&) */

void DDSUtil::decompressImage(ImageDesc *param_1,ImageDesc *param_2)

{
  uchar *puVar1;
  undefined4 uVar2;
  TYPE TVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  PIXEL_FORMAT PVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  PVar12 = 5;
  *(undefined2 *)(param_2 + 0x48) = 0;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x100000001;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined2 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uVar15 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)param_2 = uVar15;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = 5;
  *(undefined8 *)(param_2 + 0x14) = 0x100000004;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar6 = MipMapUtil::getMipRangeSize(param_2,0,*(int *)(param_1 + 0x10) + 1);
  *(uint *)(param_2 + 0x20) = uVar6;
  pvVar8 = operator_new__((ulong)uVar6);
  TVar3 = *(TYPE *)(param_1 + 0x18);
  *(void **)(param_2 + 0x28) = pvVar8;
  iVar7 = ImageUtil::getTypeMemorySize(TVar3);
  if (*(int *)(param_1 + 0x40) - 0xeU < 3) {
    iVar7 = ImageUtil::getTypeMemorySize(3);
    PVar12 = 0x15;
  }
  else if (*(int *)(param_1 + 0x40) == 7) {
    uVar6 = *(uint *)(param_1 + 0x18);
    PVar12 = 5;
    if (uVar6 < 9) {
      uVar4 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar4 & 0x78) == 0) {
        if ((uVar4 & 6) == 0) {
          if ((1 << (ulong)(uVar6 & 0x1f) & 0x180U) != 0) {
            PVar12 = 0x1a;
          }
        }
        else {
          PVar12 = 3;
        }
      }
      else {
        PVar12 = 0;
      }
    }
  }
  puVar9 = (ushort *)
           operator_new__((ulong)(uint)(iVar7 * *(int *)param_1 * *(int *)(param_1 + 4) * 4));
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != -1) {
    uVar6 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x28);
      uVar10 = MipMapUtil::getMipRangeSize(param_1,0,uVar6);
      lVar13 = *(long *)(param_2 + 0x28);
      uVar11 = MipMapUtil::getMipRangeSize(param_2,0,uVar6);
      uVar4 = *(uint *)param_1 >> (ulong)(uVar6 & 0x1f);
      uVar5 = *(uint *)(param_1 + 4) >> (ulong)(uVar6 & 0x1f);
      if (*(int *)(param_1 + 0x40) - 7U < 10) {
        puVar1 = (uchar *)(lVar14 + (uVar10 & 0xffffffff));
        switch(*(int *)(param_1 + 0x40)) {
        case 7:
          DXTUtil::decodeBC1(puVar1,uVar4,uVar5,(uchar *)puVar9);
          break;
        case 8:
          DXTUtil::decodeBC2(puVar1,uVar4,uVar5,(uchar *)puVar9,4);
          break;
        case 9:
          DXTUtil::decodeBC3(puVar1,uVar4,uVar5,(uchar *)puVar9,4);
          break;
        case 10:
          DXTUtil::decodeBC4U(puVar1,uVar4,uVar5,(uchar *)puVar9);
          break;
        case 0xb:
          DXTUtil::decodeBC4S(puVar1,uVar4,uVar5,(signed *)puVar9);
          break;
        case 0xc:
          DXTUtil::decodeBC5U(puVar1,uVar4,uVar5,(uchar *)puVar9);
          break;
        case 0xd:
          DXTUtil::decodeBC5S(puVar1,uVar4,uVar5,(signed *)puVar9);
          break;
        case 0xe:
          BC6BC7Util::decodeBC6HU(puVar1,uVar4,uVar5,puVar9);
          break;
        case 0xf:
          BC6BC7Util::decodeBC6HS(puVar1,uVar4,uVar5,puVar9);
          break;
        case 0x10:
          BC6BC7Util::decodeBC7(puVar1,uVar4,uVar5,puVar9);
        }
      }
      PixelFormatUtil::convertPixelFormat
                (puVar9,0,0,PVar12,(void *)(lVar13 + (uVar11 & 0xffffffff)),0,0,5,uVar4,uVar5,1);
      uVar6 = uVar6 + 1;
    } while (iVar7 + 1U != uVar6);
  }
  operator_delete__(puVar9);
  return;
}


