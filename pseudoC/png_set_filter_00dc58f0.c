// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_filter
// Entry Point: 00dc58f0
// Size: 496 bytes
// Signature: undefined png_set_filter(void)


void png_set_filter(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined uVar3;
  long lVar4;
  ulong uVar5;
  undefined uVar6;
  uint uVar7;
  
  uVar6 = (undefined)param_3;
  if (param_1 != 0) {
    if ((param_2 != 0) && (((uint)(param_2 == 0x40) & (*(byte *)(param_1 + 0x418) & 4) >> 2) == 0))
    {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Unknown custom filter method");
    }
    if ((param_3 & 0xff) < 8) {
      uVar3 = 8;
      switch(param_3 & 0xff) {
      case 1:
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined *)(param_1 + 0x29e) = 0x10;
        break;
      case 2:
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined *)(param_1 + 0x29e) = 0x20;
        break;
      case 3:
        uVar3 = 0x40;
      case 0:
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined *)(param_1 + 0x29e) = uVar3;
        break;
      case 4:
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined *)(param_1 + 0x29e) = 0x80;
        break;
      default:
        png_app_error(param_1,"Unknown row filter for method 0");
        lVar4 = *(long *)(param_1 + 0x260);
        *(undefined *)(param_1 + 0x29e) = 8;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined *)(param_1 + 0x29e) = uVar6;
    }
    if (lVar4 != 0) {
      uVar1 = param_3 & 0xffffff1f;
      if (*(int *)(param_1 + 0x234) != 1) {
        uVar1 = param_3;
      }
      uVar7 = uVar1 & 0xffffff2f;
      if (*(int *)(param_1 + 0x230) != 1) {
        uVar7 = uVar1;
      }
      if (((uVar7 & 0xe0) != 0) && (*(long *)(param_1 + 600) == 0)) {
        png_app_warning(param_1,"png_set_filter: UP/AVG/PAETH cannot be added after start");
        uVar7 = uVar7 & 0xffffff1f;
      }
      uVar6 = (undefined)uVar7;
      uVar5 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
      if ((uint)uVar5 < 8) {
        uVar5 = *(uint *)(param_1 + 0x230) * uVar5 + 7 >> 3;
        lVar4 = *(long *)(param_1 + 0x268);
      }
      else {
        uVar5 = (ulong)*(uint *)(param_1 + 0x230) * (uVar5 >> 3);
        lVar4 = *(long *)(param_1 + 0x268);
      }
      if (lVar4 == 0) {
        uVar2 = png_malloc(param_1,uVar5 + 1);
        *(undefined8 *)(param_1 + 0x268) = uVar2;
      }
      if ((1 < (uVar7 >> 4 & 1) + (uVar7 >> 5 & 1) + (uVar7 >> 6 & 1) + (uVar7 >> 7 & 1)) &&
         (*(long *)(param_1 + 0x270) == 0)) {
        uVar2 = png_malloc(param_1,uVar5 + 1);
        *(undefined8 *)(param_1 + 0x270) = uVar2;
      }
    }
    *(undefined *)(param_1 + 0x29e) = uVar6;
  }
  return;
}


