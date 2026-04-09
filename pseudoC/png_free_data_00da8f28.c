// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_free_data
// Entry Point: 00da8f28
// Size: 1244 bytes
// Signature: undefined png_free_data(void)


void png_free_data(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0xa0);
  if ((lVar1 == 0) || (((param_3 & *(uint *)(param_2 + 300)) >> 0xe & 1) == 0)) {
LAB_00da8f94:
    uVar3 = *(uint *)(param_2 + 300);
  }
  else {
    if (param_4 != 0xffffffff) {
      png_free(param_1,*(undefined8 *)(lVar1 + (long)(int)param_4 * 0x38 + 8));
      *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)(int)param_4 * 0x38 + 8) = 0;
      goto LAB_00da8f94;
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      png_free(param_1,*(undefined8 *)(lVar1 + 8));
      if (1 < *(int *)(param_2 + 0x94)) {
        lVar1 = 1;
        lVar5 = 0x40;
        do {
          png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + lVar5));
          lVar1 = lVar1 + 1;
          lVar5 = lVar5 + 0x38;
        } while (lVar1 < *(int *)(param_2 + 0x94));
      }
      lVar1 = *(long *)(param_2 + 0xa0);
    }
    png_free(param_1,lVar1);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(undefined4 *)(param_2 + 0x98) = 0;
    uVar3 = *(uint *)(param_2 + 300);
  }
  if (((param_3 & uVar3) >> 0xd & 1) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    png_free(param_1,*(undefined8 *)(param_2 + 0xb8));
    uVar3 = *(uint *)(param_2 + 300);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0;
  }
  if (((param_3 & uVar3) >> 8 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x150));
    png_free(param_1,*(undefined8 *)(param_2 + 0x158));
    *(undefined8 *)(param_2 + 0x150) = 0;
    *(undefined8 *)(param_2 + 0x158) = 0;
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
  }
  if (((param_3 & uVar3) >> 7 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x108));
    png_free(param_1,*(undefined8 *)(param_2 + 0x118));
    puVar2 = *(undefined8 **)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      if (*(char *)(param_2 + 0x129) != '\0') {
        png_free(param_1,*puVar2);
        if (1 < *(byte *)(param_2 + 0x129)) {
          uVar4 = 1;
          do {
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x120) + uVar4 * 8));
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(byte *)(param_2 + 0x129));
        }
        puVar2 = *(undefined8 **)(param_2 + 0x120);
      }
      png_free(param_1,puVar2);
      *(undefined8 *)(param_2 + 0x120) = 0;
    }
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
  }
  if (((param_3 & uVar3) >> 4 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x80));
    png_free(param_1,*(undefined8 *)(param_2 + 0x88));
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x140);
  if ((puVar2 != (undefined8 *)0x0) && (((param_3 & *(uint *)(param_2 + 300)) >> 5 & 1) != 0)) {
    if (param_4 == 0xffffffff) {
      if (0 < *(int *)(param_2 + 0x148)) {
        png_free(param_1,*puVar2);
        png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x140) + 0x10));
        if (1 < *(int *)(param_2 + 0x148)) {
          lVar5 = 0;
          lVar1 = 1;
          do {
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x140) + lVar5 + 0x20));
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x140) + lVar5 + 0x30));
            lVar1 = lVar1 + 1;
            lVar5 = lVar5 + 0x20;
          } while (lVar1 < *(int *)(param_2 + 0x148));
        }
        puVar2 = *(undefined8 **)(param_2 + 0x140);
      }
      png_free(param_1,puVar2);
      *(undefined8 *)(param_2 + 0x140) = 0;
      *(undefined4 *)(param_2 + 0x148) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      lVar1 = *(long *)(param_2 + 0x130);
      goto joined_r0x00da9110;
    }
    uVar4 = -(ulong)(param_4 >> 0x1f) & 0xffffffe000000000 | (ulong)param_4 << 5;
    png_free(param_1,*(undefined8 *)((long)puVar2 + uVar4));
    png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x140) + uVar4 + 0x10));
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x140) + uVar4);
    *puVar2 = 0;
    puVar2[2] = 0;
  }
  lVar1 = *(long *)(param_2 + 0x130);
joined_r0x00da9110:
  if ((lVar1 != 0) && (((param_3 & *(uint *)(param_2 + 300)) >> 9 & 1) != 0)) {
    if (param_4 == 0xffffffff) {
      if (0 < *(int *)(param_2 + 0x138)) {
        png_free(param_1,*(undefined8 *)(lVar1 + 8));
        if (1 < *(int *)(param_2 + 0x138)) {
          lVar1 = 1;
          lVar5 = 0x28;
          do {
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x130) + lVar5));
            lVar1 = lVar1 + 1;
            lVar5 = lVar5 + 0x20;
          } while (lVar1 < *(int *)(param_2 + 0x138));
        }
        lVar1 = *(long *)(param_2 + 0x130);
      }
      png_free(param_1,lVar1);
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined4 *)(param_2 + 0x138) = 0;
    }
    else {
      uVar4 = -(ulong)(param_4 >> 0x1f) & 0xffffffe000000000 | (ulong)param_4 << 5;
      png_free(param_1,*(undefined8 *)(lVar1 + uVar4 + 8));
      *(undefined8 *)(*(long *)(param_2 + 0x130) + uVar4 + 8) = 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 300);
  if (((param_3 & uVar3) >> 0xf & 1) != 0) {
    if (*(long *)(param_2 + 0xf8) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_2 + 0xf8) = 0;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_2 + 0xf0) = 0;
    }
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffeffff;
  }
  if (((param_3 & uVar3) >> 3 & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x100));
    *(undefined8 *)(param_2 + 0x100) = 0;
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
  }
  if (((param_3 & uVar3) >> 0xc & 1) != 0) {
    png_free(param_1,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x20) = 0;
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
  }
  if (((param_3 & uVar3) >> 6 & 1) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x160);
    if (puVar2 != (undefined8 *)0x0) {
      if (*(int *)(param_2 + 4) != 0) {
        png_free(param_1,*puVar2);
        if (1 < *(uint *)(param_2 + 4)) {
          uVar4 = 1;
          do {
            png_free(param_1,*(undefined8 *)(*(long *)(param_2 + 0x160) + uVar4 * 8));
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_2 + 4));
        }
        puVar2 = *(undefined8 **)(param_2 + 0x160);
      }
      png_free(param_1,puVar2);
      uVar3 = *(uint *)(param_2 + 300);
      *(undefined8 *)(param_2 + 0x160) = 0;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
  }
  if (param_4 != 0xffffffff) {
    param_3 = param_3 & 0xffffbddf;
  }
  *(uint *)(param_2 + 300) = uVar3 & (param_3 ^ 0xffffffff);
  return;
}


