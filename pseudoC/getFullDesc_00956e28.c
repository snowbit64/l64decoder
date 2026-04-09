// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullDesc
// Entry Point: 00956e28
// Size: 1012 bytes
// Signature: undefined __cdecl getFullDesc(ulonglong param_1, ulonglong param_2, char * param_3, char * param_4)


/* WARNING: Type propagation algorithm not settling */
/* MaterialAttributes::getFullDesc(unsigned long long, unsigned long long, char const*, char*) */

void MaterialAttributes::getFullDesc
               (ulonglong param_1,ulonglong param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar5 = param_1 >> 0x20;
  iVar2 = FUN_00956d84(param_4,0xffffffffffffffff,"%sMaterial attributes %8.8X-%8.8X\n",param_3,
                       uVar5,param_1 & 0xffffffff);
  uVar8 = param_2 | param_1;
  pcVar6 = param_4 + iVar2;
  uVar7 = (uint)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 1) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 1) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_ALPHA_BLENDING\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 2) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 2) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_ALPHA_TESTING\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 2 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 4) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 4) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_ALBEDOMAP\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  if ((param_2 & 0x18 | param_1 >> 3 & 3) != 0) {
    uVar4 = param_1 >> 3 & 3;
    uVar3 = 0x2a;
    if (uVar4 != (param_2 >> 3 & 3)) {
      uVar3 = 0x21;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c NORMAL_MAP_FORMAT %s\n",param_3,uVar3,
                         *(undefined8 *)
                          (toString(MaterialAttributes::NORMAL_MAP_FORMAT)::nmDesc + uVar4 * 8));
    pcVar6 = pcVar6 + iVar2;
  }
  if ((uVar7 >> 5 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x20) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_GLOSSMAP\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  if ((uVar7 >> 6 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x40) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x40) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_EMISSIVEMAP\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x80) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x80) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_REFLECTIONMAP\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 8 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x100) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x100) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_REFRACTIONMAP\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 9 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x200) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x200) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_ALLOW_FOG\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 10 & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x400) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x400) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_LIGHTING\n",param_3,uVar1);
    pcVar6 = (char *)((long)pcVar6 + (long)iVar2);
  }
  if ((uVar7 >> 0xb & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x800) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x800) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_DEPTH_VISUALIZATION\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  if ((uVar7 >> 0xc & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x1000) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x1000) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_REFRACTION_PASS\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  if ((uVar7 >> 0xd & 1) != 0) {
    uVar3 = 0x2a;
    if ((param_2 & 0x2000) == 0) {
      uVar3 = 0x2b;
    }
    uVar1 = 0x2d;
    if ((param_1 & 0x2000) != 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c MASK_USED\n",param_3,uVar1);
    pcVar6 = pcVar6 + iVar2;
  }
  uVar4 = param_1 >> 0xe & 0x3ffff;
  if ((uVar4 | param_2 & 0xffffc000) != 0) {
    uVar3 = 0x2a;
    if (uVar4 != (param_2 >> 0xe & 0x3ffff)) {
      uVar3 = 0x21;
    }
    iVar2 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c illegal bits %8.8X\n",param_3,uVar3);
    pcVar6 = pcVar6 + iVar2;
  }
  if (uVar8 >> 0x20 != 0) {
    uVar3 = 0x2a;
    if (uVar5 != param_2 >> 0x20) {
      uVar3 = 0x21;
    }
    FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Custom shader id %8.8X\n",param_3,uVar3,uVar5);
  }
  return;
}


