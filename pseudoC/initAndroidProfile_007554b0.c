// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initAndroidProfile
// Entry Point: 007554b0
// Size: 736 bytes
// Signature: undefined __thiscall initAndroidProfile(HardwareScalability * this, PERFORMANCE_CLASS param_1)


/* HardwareScalability::initAndroidProfile(HardwareScalability::PERFORMANCE_CLASS) */

void __thiscall
HardwareScalability::initAndroidProfile(HardwareScalability *this,PERFORMANCE_CLASS param_1)

{
  HardwareScalability *pHVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *__s1;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined auStack_b8 [128];
  long local_38;
  
  uVar9 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this[0x11] = (HardwareScalability)0x0;
  if ((int)param_1 < 4) {
LAB_007554e0:
    *(int *)(this + 0x18) = (int)uVar9;
  }
  else {
    pHVar1 = this + 0xe9;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar1 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(auStack_b8,uVar9,"%s.graphic.scalability.performanceClass",pHVar1);
    __s1 = (char *)(**(code **)(**(long **)(this + 0x100) + 0x10))
                             (*(long **)(this + 0x100),auStack_b8,0);
    if ((__s1 != (char *)0x0) && (iVar6 = strcasecmp(__s1,"auto"), iVar6 != 0)) {
      iVar6 = strcasecmp(__s1,s_performanceClassNames);
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        iVar6 = strcasecmp(__s1,PTR_s_Medium_0103ee28);
        if (iVar6 == 0) {
          uVar9 = 1;
        }
        else {
          iVar6 = strcasecmp(__s1,PTR_DAT_0103ee30);
          if (iVar6 == 0) {
            uVar9 = 2;
          }
          else {
            iVar6 = strcasecmp(__s1,PTR_s_Very_High_0103ee38);
            uVar10 = 3;
            if (iVar6 != 0) {
              uVar10 = 1;
            }
            uVar9 = (ulong)uVar10;
          }
        }
      }
      goto LAB_007554e0;
    }
    uVar9 = (ulong)*(uint *)(this + 0x14);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x14);
    this[0x11] = (HardwareScalability)0x1;
  }
  this[0x1c] = (HardwareScalability)0x0;
  lVar2 = uVar9 * 200;
  uVar18 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x28);
  uVar17 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x20);
  uVar15 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x38);
  uVar13 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x30);
  *(undefined8 *)(this + 0x48) = uVar18;
  *(undefined8 *)(this + 0x40) = uVar17;
  uVar20 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 8);
  uVar19 = *(undefined8 *)(s_mobileClassSettings + lVar2);
  uVar22 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x18);
  uVar21 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x10);
  *(undefined8 *)(this + 0x58) = uVar15;
  *(undefined8 *)(this + 0x50) = uVar13;
  *(undefined8 *)(this + 0x48) = uVar18;
  *(undefined8 *)(this + 0x40) = uVar17;
  *(undefined8 *)(this + 0x58) = uVar15;
  *(undefined8 *)(this + 0x50) = uVar13;
  uVar15 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x48);
  uVar13 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x40);
  uVar18 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x58);
  uVar17 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x50);
  *(undefined8 *)(this + 0x28) = uVar20;
  *(undefined8 *)(this + 0x20) = uVar19;
  *(undefined8 *)(this + 0x38) = uVar22;
  *(undefined8 *)(this + 0x30) = uVar21;
  *(undefined8 *)(this + 0x28) = uVar20;
  *(undefined8 *)(this + 0x20) = uVar19;
  *(undefined8 *)(this + 0x38) = uVar22;
  *(undefined8 *)(this + 0x30) = uVar21;
  *(undefined8 *)(this + 0x68) = uVar15;
  *(undefined8 *)(this + 0x60) = uVar13;
  uVar25 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x88);
  uVar24 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x80);
  uVar27 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x98);
  uVar26 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x90);
  *(undefined8 *)(this + 0x78) = uVar18;
  *(undefined8 *)(this + 0x70) = uVar17;
  *(undefined8 *)(this + 0x68) = uVar15;
  *(undefined8 *)(this + 0x60) = uVar13;
  *(undefined8 *)(this + 0x78) = uVar18;
  *(undefined8 *)(this + 0x70) = uVar17;
  uVar17 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x78);
  uVar15 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x70);
  *(undefined8 *)(this + 0xa8) = uVar25;
  *(undefined8 *)(this + 0xa0) = uVar24;
  *(undefined8 *)(this + 0xb8) = uVar27;
  *(undefined8 *)(this + 0xb0) = uVar26;
  uVar19 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x68);
  uVar18 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0x60);
  uVar13 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xc0);
  uVar21 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xb8);
  uVar20 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xb0);
  *(undefined8 *)(this + 0x98) = uVar17;
  *(undefined8 *)(this + 0x90) = uVar15;
  uVar23 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xa8);
  uVar22 = *(undefined8 *)(s_mobileClassSettings + lVar2 + 0xa0);
  *(undefined8 *)(this + 0x88) = uVar19;
  *(undefined8 *)(this + 0x80) = uVar18;
  *(undefined8 *)(this + 0xe0) = uVar13;
  *(undefined8 *)(this + 0x88) = uVar19;
  *(undefined8 *)(this + 0x80) = uVar18;
  *(undefined8 *)(this + 0x98) = uVar17;
  *(undefined8 *)(this + 0x90) = uVar15;
  *(undefined8 *)(this + 200) = uVar23;
  *(undefined8 *)(this + 0xc0) = uVar22;
  *(undefined8 *)(this + 0xd8) = uVar21;
  *(undefined8 *)(this + 0xd0) = uVar20;
  *(undefined8 *)(this + 0xe0) = uVar13;
  *(undefined8 *)(this + 200) = uVar23;
  *(undefined8 *)(this + 0xc0) = uVar22;
  *(undefined8 *)(this + 0xd8) = uVar21;
  *(undefined8 *)(this + 0xd0) = uVar20;
  *(undefined8 *)(this + 0xa8) = uVar25;
  *(undefined8 *)(this + 0xa0) = uVar24;
  *(undefined8 *)(this + 0xb8) = uVar27;
  *(undefined8 *)(this + 0xb0) = uVar26;
  uVar7 = ANativeWindow_getWidth(*(undefined8 *)(AndroidSysUtil::s_pApp + 0x48));
  uVar8 = ANativeWindow_getHeight(*(undefined8 *)(AndroidSysUtil::s_pApp + 0x48));
  uVar10 = uVar7;
  if ((int)uVar8 <= (int)uVar7) {
    uVar10 = uVar8;
  }
  fVar14 = (float)uVar10;
  if (this[0x12] != (HardwareScalability)0x0) {
    bVar4 = SBORROW4(uVar10,0x1e0);
    bVar5 = (int)(uVar10 - 0x1e0) < 0;
    uVar11 = 0x44340000;
    uVar12 = 0x1e0;
    goto LAB_00755668;
  }
  switch(*(undefined4 *)(this + 0x18)) {
  case 0:
    bVar4 = SBORROW4(uVar10,600);
    bVar5 = (int)(uVar10 - 600) < 0;
    uVar11 = 0x44340000;
    uVar12 = 600;
    break;
  case 1:
    bVar4 = SBORROW4(uVar10,0x2d0);
    bVar5 = (int)(uVar10 - 0x2d0) < 0;
    uVar11 = 0x44610000;
    uVar12 = 0x2d0;
    break;
  case 2:
    bVar4 = SBORROW4(uVar10,900);
    bVar5 = (int)(uVar10 - 900) < 0;
    uVar11 = 0x44870000;
    uVar12 = 900;
    break;
  case 3:
    if (0x437 < (int)uVar10) {
      uVar10 = 0x438;
    }
    *(uint *)(this + 0xc) = uVar10;
    *(undefined4 *)(this + 0x20) = 0x3f800000;
    goto LAB_0075567c;
  default:
    uVar10 = *(uint *)(this + 0xc);
    goto LAB_0075567c;
  }
LAB_00755668:
  fVar16 = (float)NEON_fminnm(fVar14,uVar11);
  if (bVar5 == bVar4) {
    uVar10 = uVar12;
  }
  *(float *)(this + 0x20) = fVar16 / fVar14;
  *(uint *)(this + 0xc) = uVar10;
LAB_0075567c:
  if ((int)uVar8 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(undefined4 *)this = 0;
  this[4] = (HardwareScalability)0x0;
  this[0x1c] = (HardwareScalability)0x1;
  *(undefined4 *)(this + 0x38) = 0x3f8ccccd;
  *(undefined8 *)(this + 0x7c) = 4;
  *(int *)(this + 8) = (int)(((float)uVar8 / fVar14) * (float)(ulong)uVar10);
  *(float *)(this + 0x24) = (float)(ulong)uVar10 / fVar14;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


