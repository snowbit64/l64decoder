// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullDesc
// Entry Point: 0095721c
// Size: 624 bytes
// Signature: undefined __cdecl getFullDesc(uint param_1, uint param_2, char * param_3, char * param_4)


/* LightingEnv::getFullDesc(unsigned int, unsigned int, char const*, char*) */

void LightingEnv::getFullDesc(uint param_1,uint param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if ((param_1 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      uVar3 = 0x2d;
      goto LAB_0095725c;
    }
  }
  else {
    uVar3 = param_2 & 1 ^ 0x2b;
LAB_0095725c:
    iVar1 = FUN_00956d84(param_4,0xffffffffffffffff,"%s%c Distance blending\n",param_3,uVar3);
    param_4 = param_4 + iVar1;
  }
  if ((param_1 >> 1 & 1) == 0) {
    if ((param_2 >> 1 & 1) != 0) {
      uVar4 = 0x2d;
      goto LAB_00957294;
    }
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 2) == 0) {
      uVar4 = 0x2b;
    }
LAB_00957294:
    iVar1 = FUN_00956d84(param_4,0xffffffffffffffff,"%s%c Not in zfill\n",param_3,uVar4);
    param_4 = param_4 + iVar1;
  }
  uVar3 = param_1 >> 2 & 0x1f;
  if ((uVar3 | param_2 & 0x7c) != 0) {
    uVar4 = 0x2a;
    if (uVar3 != (param_2 >> 2 & 0x1f)) {
      uVar4 = 0x21;
    }
    uVar2 = RenderArgs::toString(uVar3);
    iVar1 = FUN_00956d84(param_4,0xffffffffffffffff,"%s%c Info rendering: %s\n",param_3,uVar4,uVar2)
    ;
    param_4 = param_4 + iVar1;
  }
  uVar4 = 0x2a;
  uVar5 = uVar4;
  if ((param_1 >> 7 & 3) != (param_2 >> 7 & 3)) {
    uVar5 = 0x21;
  }
  iVar1 = FUN_00956d84(param_4,0xffffffffffffffff,"%s%c GPU perf class %d\n",param_3,uVar5);
  pcVar6 = param_4 + iVar1;
  if ((param_1 >> 9 & 1) == 0) {
    if ((param_2 >> 9 & 1) != 0) {
      uVar4 = 0x2d;
      goto LAB_00957348;
    }
  }
  else {
    if ((param_2 & 0x200) == 0) {
      uVar4 = 0x2b;
    }
LAB_00957348:
    iVar1 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Large shadow map filter\n",param_3,uVar4);
    pcVar6 = pcVar6 + iVar1;
  }
  if ((param_1 >> 10 & 1) == 0) {
    if ((param_2 >> 10 & 1) != 0) {
      uVar4 = 0x2d;
      goto LAB_00957380;
    }
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 0x400) == 0) {
      uVar4 = 0x2b;
    }
LAB_00957380:
    iVar1 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c SSAO\n",param_3,uVar4);
    pcVar6 = pcVar6 + iVar1;
  }
  if ((param_1 >> 0xb & 1) == 0) {
    if ((param_2 >> 0xb & 1) != 0) {
      uVar4 = 0x2d;
      goto LAB_009573b8;
    }
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 0x800) == 0) {
      uVar4 = 0x2b;
    }
LAB_009573b8:
    iVar1 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Non-MSAA\n",param_3,uVar4);
    pcVar6 = pcVar6 + iVar1;
  }
  if ((param_1 >> 0xc & 1) == 0) {
    if ((param_2 >> 0xc & 1) != 0) {
      uVar4 = 0x2d;
      goto LAB_009573f0;
    }
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 0x1000) == 0) {
      uVar4 = 0x2b;
    }
LAB_009573f0:
    iVar1 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Low-spec fog\n",param_3,uVar4);
    pcVar6 = pcVar6 + iVar1;
  }
  if ((param_1 >> 0xd & 1) == 0) {
    if ((param_2 >> 0xd & 1) == 0) goto LAB_00957444;
    uVar4 = 0x2d;
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 0x2000) == 0) {
      uVar4 = 0x2b;
    }
  }
  iVar1 = FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Write motion vectors\n",param_3,uVar4);
  pcVar6 = pcVar6 + iVar1;
LAB_00957444:
  if ((param_1 >> 0xf & 1) == 0) {
    if ((param_2 >> 0xf & 1) == 0) {
      return;
    }
    uVar4 = 0x2d;
  }
  else {
    uVar4 = 0x2a;
    if ((param_2 & 0x8000) == 0) {
      uVar4 = 0x2b;
    }
  }
  FUN_00956d84(pcVar6,0xffffffffffffffff,"%s%c Shading Rage Image\n",param_3,uVar4);
  return;
}


