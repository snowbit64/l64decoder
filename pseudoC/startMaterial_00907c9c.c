// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startMaterial
// Entry Point: 00907c9c
// Size: 1732 bytes
// Signature: undefined __cdecl startMaterial(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startMaterial(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startMaterial(void *param_1,char *param_2,char **param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  MaterialManager *this;
  undefined4 uVar6;
  char *pcVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar16 = *(long *)((long)param_1 + 0x268);
  *(undefined8 *)(lVar16 + 0x94) = 0xffffffffffffffff;
  *(char **)(lVar16 + 0x60) = "UnnamedMaterial";
  *(undefined *)(lVar16 + 0x68) = 1;
  *(undefined8 *)(lVar16 + 0xa4) = 0x3f0000003fc00000;
  *(undefined8 *)(lVar16 + 0x9c) = 0x3f0000003f000000;
  *(undefined8 *)(lVar16 + 0x120) = 0;
  *(undefined8 *)(lVar16 + 0x118) = 0;
  *(undefined2 *)(lVar16 + 0xbc) = 1;
  *(undefined4 *)(lVar16 + 0xb8) = 0x3d0f5c29;
  *(undefined8 *)(lVar16 + 0x150) = 0;
  *(undefined8 *)(lVar16 + 0x148) = 0;
  *(undefined8 *)(lVar16 + 0x130) = 0;
  *(undefined8 *)(lVar16 + 0x128) = 0;
  *(undefined8 *)(lVar16 + 0x110) = 0;
  *(undefined8 *)(lVar16 + 0x108) = 0;
  *(undefined8 *)(lVar16 + 0x270) = 0;
  *(undefined8 *)(lVar16 + 0x268) = 0;
  *(undefined8 *)(lVar16 + 0x290) = 0;
  *(undefined8 *)(lVar16 + 0x288) = 0;
  *(undefined8 *)(lVar16 + 0x140) = 0;
  *(undefined8 *)(lVar16 + 0x138) = 0;
  *(undefined8 *)(lVar16 + 0x240) = 0;
  *(undefined8 *)(lVar16 + 0x238) = 0;
  *(undefined8 *)(lVar16 + 0x260) = 0;
  *(undefined8 *)(lVar16 + 600) = 0;
  *(undefined8 *)(lVar16 + 0x280) = 0;
  *(undefined8 *)(lVar16 + 0x278) = 0;
  *(undefined8 *)(lVar16 + 0x210) = 0;
  *(undefined8 *)(lVar16 + 0x208) = 0;
  *(undefined8 *)(lVar16 + 0x84) = 0;
  *(undefined8 *)(lVar16 + 0x7c) = 0;
  *(undefined8 *)(lVar16 + 0x250) = 0;
  *(undefined8 *)(lVar16 + 0x248) = 0;
  *(undefined8 *)(lVar16 + 0x1f0) = 0;
  *(undefined8 *)(lVar16 + 0x1e8) = 0;
  *(undefined8 *)(lVar16 + 0x74) = 0;
  *(undefined8 *)(lVar16 + 0x6c) = 0;
  *(undefined8 *)(lVar16 + 0x220) = 0;
  *(undefined8 *)(lVar16 + 0x218) = 0;
  *(undefined8 *)(lVar16 + 0x1d0) = 0;
  *(undefined8 *)(lVar16 + 0x1c8) = 0;
  *(undefined8 *)(lVar16 + 0x8c) = 0;
  *(undefined8 *)(lVar16 + 0x200) = 0;
  *(undefined8 *)(lVar16 + 0x1f8) = 0;
  *(undefined8 *)(lVar16 + 0x1b0) = 0;
  *(undefined8 *)(lVar16 + 0x1a8) = 0;
  *(undefined *)(lVar16 + 0xac) = 0;
  *(undefined8 *)(lVar16 + 0x1e0) = 0;
  *(undefined8 *)(lVar16 + 0x1d8) = 0;
  *(undefined8 *)(lVar16 + 400) = 0;
  *(undefined8 *)(lVar16 + 0x188) = 0;
  *(undefined8 *)(lVar16 + 0xb0) = 0x3f0000003f800000;
  *(undefined8 *)(lVar16 + 0x1c0) = 0;
  *(undefined8 *)(lVar16 + 0x1b8) = 0;
  *(undefined *)(lVar16 + 0xbe) = 0;
  *(undefined8 *)(lVar16 + 0x230) = 0;
  *(undefined8 *)(lVar16 + 0x228) = 0;
  *(undefined8 *)(lVar16 + 0x1a0) = 0;
  *(undefined8 *)(lVar16 + 0x198) = 0;
  plVar17 = (long *)(lVar16 + 0xc0);
  *plVar17 = 0;
  *(undefined8 *)(lVar16 + 200) = 0;
  *(undefined8 *)(lVar16 + 0x180) = 0;
  *(undefined8 *)(lVar16 + 0x178) = 0;
  *(undefined4 *)(lVar16 + 0xd0) = 0;
  *(undefined8 *)(lVar16 + 0xe0) = 0;
  *(undefined8 *)(lVar16 + 0xd8) = 0;
  *(undefined8 *)(lVar16 + 0xf0) = 0;
  *(undefined8 *)(lVar16 + 0xe8) = 0;
  *(undefined8 *)(lVar16 + 0x100) = 0;
  *(undefined8 *)(lVar16 + 0xf8) = 0;
  *(undefined8 *)(lVar16 + 0x170) = 0;
  *(undefined8 *)(lVar16 + 0x168) = 0;
  *(undefined8 *)(lVar16 + 0x160) = 0;
  *(undefined8 *)(lVar16 + 0x158) = 0;
  *(undefined4 *)(lVar16 + 0x298) = 0;
  ExpatUtil::getAttr("name",param_3);
  pcVar5 = (char *)ExpatUtil::getAttr("materialId",param_3);
  if (pcVar5 != (char *)0x0) {
    uVar3 = atoi(pcVar5);
    pcVar5 = (char *)(ulong)uVar3;
  }
  pcVar7 = *(char **)((long)param_1 + 0x268);
  *(int *)(pcVar7 + 0x18) = (int)pcVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pcVar7);
  pbVar8 = *(byte **)((long)param_1 + 0x268);
  bVar1 = *pbVar8;
  pbVar14 = *(byte **)(pbVar8 + 0x10);
  *(undefined4 *)(lVar16 + 0x6c) = 0;
  if ((bVar1 & 1) == 0) {
    pbVar14 = pbVar8 + 1;
  }
  *(byte **)(lVar16 + 0x60) = pbVar14;
  pcVar5 = (char *)ExpatUtil::getAttr("shaderType",param_3);
  if (pcVar5 != (char *)0x0) {
    iVar4 = strcasecmp(pcVar5,Geometry::s_shaderTypeNames);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      iVar4 = strcasecmp(pcVar5,PTR_s_FOLIAGE_0103efb0);
      if (iVar4 == 0) {
        uVar6 = 1;
      }
      else {
        iVar4 = strcasecmp(pcVar5,PTR_s_TERRAIN_0103efb8);
        if (iVar4 == 0) {
          uVar6 = 2;
        }
        else {
          iVar4 = strcasecmp(pcVar5,PTR_s_TERRAIN_DETAIL_0103efc0);
          if (iVar4 == 0) {
            uVar6 = 3;
          }
          else {
            iVar4 = strcasecmp(pcVar5,PTR_s_PARTICLE_SYSTEM_0103efc8);
            if (iVar4 == 0) {
              uVar6 = 4;
            }
            else {
              iVar4 = strcasecmp(pcVar5,PTR_s_FILL_PLANE_0103efd0);
              if (iVar4 != 0) goto LAB_00907f20;
              uVar6 = 5;
            }
          }
        }
      }
    }
    *(undefined4 *)(undefined8 *)(lVar16 + 0x6c) = uVar6;
  }
LAB_00907f20:
  *(undefined *)(*(long *)((long)param_1 + 0x268) + 0x30) = 0;
  pcVar5 = (char *)ExpatUtil::getAttr("diffuseColor",param_3);
  if ((pcVar5 != (char *)0x0) &&
     (iVar4 = StringUtil::splitIntoFloats(pcVar5,&local_70,4,' '), 2 < iVar4)) {
    lVar9 = *(long *)((long)param_1 + 0x268);
    uVar6 = uStack_64;
    if (iVar4 != 4) {
      uVar6 = 0x3f800000;
    }
    *(float *)(lVar9 + 0x3c) = local_68;
    *(ulong *)(lVar9 + 0x34) = CONCAT44(uStack_6c,local_70);
    *(undefined *)(lVar9 + 0x30) = 1;
    *(undefined4 *)(lVar9 + 0x40) = uVar6;
  }
  *(undefined *)(*(long *)((long)param_1 + 0x268) + 0x1c) = 0;
  pcVar5 = (char *)ExpatUtil::getAttr("emissiveColor",param_3);
  if ((pcVar5 != (char *)0x0) &&
     (iVar4 = StringUtil::splitIntoFloats(pcVar5,&local_70,4,' '), 2 < iVar4)) {
    lVar9 = *(long *)((long)param_1 + 0x268);
    if (iVar4 != 4) {
      uStack_64 = 0x3f800000;
    }
    *(float *)(lVar9 + 0x28) = local_68;
    *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack_6c,local_70);
    *(undefined *)(lVar9 + 0x1c) = 1;
    *(undefined4 *)(lVar9 + 0x2c) = uStack_64;
  }
  *(undefined *)(*(long *)((long)param_1 + 0x268) + 0x44) = 0;
  pcVar5 = (char *)ExpatUtil::getAttr("specularColor",param_3);
  if ((pcVar5 != (char *)0x0) &&
     (iVar4 = StringUtil::splitIntoFloats(pcVar5,&local_70,3,' '), iVar4 == 3)) {
    lVar9 = *(long *)((long)param_1 + 0x268);
    *(float *)(lVar9 + 0x48) = local_70;
    *(undefined4 *)(lVar9 + 0x4c) = 0x3f800000;
    *(float *)(lVar9 + 0x50) = local_68;
    *(undefined4 *)(lVar9 + 0x54) = 0x3f800000;
    if ((local_70 != 0.0) || (local_68 != 0.0)) {
      *(undefined *)(lVar9 + 0x44) = 1;
    }
  }
  pcVar5 = (char *)ExpatUtil::getAttr("alphaBlending",param_3);
  if ((pcVar5 != (char *)0x0) && (iVar4 = strcasecmp(pcVar5,"true"), iVar4 == 0)) {
    *(undefined *)(lVar16 + 0xbe) = 1;
  }
  pcVar5 = (char *)ExpatUtil::getAttr("allowFog",param_3);
  if ((pcVar5 != (char *)0x0) && (iVar4 = strcasecmp(pcVar5,"false"), iVar4 == 0)) {
    *(undefined *)(lVar16 + 0xbc) = 0;
  }
  pcVar5 = (char *)ExpatUtil::getAttr("customShaderId",param_3);
  if (pcVar5 != (char *)0x0) {
    uVar3 = atoi(pcVar5);
    plVar15 = (long *)((long)param_1 + 0x90);
    plVar11 = (long *)*plVar15;
    plVar10 = plVar15;
    if (plVar11 != (long *)0x0) {
      do {
        if (*(uint *)(plVar11 + 4) >= uVar3) {
          plVar10 = plVar11;
        }
        plVar11 = (long *)plVar11[*(uint *)(plVar11 + 4) < uVar3];
      } while (plVar11 != (long *)0x0);
      if ((plVar10 != plVar15) && (*(uint *)(plVar10 + 4) <= uVar3)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_70);
                    /* try { // try from 00908100 to 0090811b has its CatchHandler @ 00908360 */
        this = (MaterialManager *)MaterialManager::getInstance();
        pcVar5 = (char *)((ulong)&local_70 | 1);
        if (((uint)local_70 & 1) != 0) {
          pcVar5 = local_60;
        }
        lVar9 = MaterialManager::getCustomShader(this,pcVar5);
        *plVar17 = lVar9;
        if ((local_70._0_1_ & 1) != 0) {
          operator_delete(local_60);
        }
      }
    }
  }
  if (*plVar17 != 0) {
    pcVar5 = (char *)ExpatUtil::getAttr("customShaderVariation",param_3);
    lVar9 = *(long *)(*plVar17 + 0x110);
    uVar18 = (*(long *)(*plVar17 + 0x118) - lVar9 >> 5) * 0x6db6db6db6db6db7;
    if ((pcVar5 != (char *)0x0) && (1 < uVar18)) {
      uVar19 = 1;
      do {
        iVar4 = strcmp(*(char **)(lVar9 + uVar19 * 0xe0),pcVar5);
        if (iVar4 == 0) {
          *(int *)(lVar16 + 200) = (int)uVar19;
          break;
        }
        uVar19 = (ulong)((int)uVar19 + 1);
      } while (uVar19 <= uVar18 && uVar18 - uVar19 != 0);
    }
    uVar19 = (ulong)*(uint *)(lVar16 + 200);
    if (uVar18 < uVar19 || uVar18 - uVar19 == 0) {
      *(undefined4 *)(lVar16 + 0xcc) = 0;
      *(undefined4 *)(lVar16 + 0xd0) = 0;
    }
    else {
      lVar12 = lVar9 + uVar19 * 0xe0;
      uVar3 = (uint)((ulong)(*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58)) >> 3);
      if (0xf < uVar3) {
        uVar3 = 0x10;
      }
      *(uint *)(lVar16 + 0xcc) = uVar3;
      uVar3 = (uint)((ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40)) >> 3);
      if (uVar3 < 0x15) {
        *(uint *)(lVar16 + 0xd0) = uVar3;
        if (uVar3 == 0) goto LAB_00908274;
      }
      else {
        *(undefined4 *)(lVar16 + 0xd0) = 0x14;
      }
      lVar9 = **(long **)(lVar9 + uVar19 * 0xe0 + 0x40);
      uVar20 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar16 + 0x160) = *(undefined8 *)(lVar9 + 0x38);
      *(undefined8 *)(lVar16 + 0x158) = uVar20;
      if (1 < *(uint *)(lVar16 + 0xd0)) {
        lVar9 = *(long *)(lVar16 + 0xc0);
        uVar18 = 1;
        puVar13 = (undefined8 *)(lVar16 + 0x168);
        do {
          lVar12 = *(long *)(*(long *)(*(long *)(lVar9 + 0x110) +
                                       (ulong)*(uint *)(lVar16 + 200) * 0xe0 + 0x40) + uVar18 * 8);
          uVar18 = uVar18 + 1;
          uVar20 = *(undefined8 *)(lVar12 + 0x30);
          puVar13[1] = *(undefined8 *)(lVar12 + 0x38);
          *puVar13 = uVar20;
          puVar13 = puVar13 + 2;
        } while (uVar18 < *(uint *)(lVar16 + 0xd0));
      }
    }
  }
LAB_00908274:
  pcVar5 = (char *)ExpatUtil::getAttr("shadingRate",param_3);
  if (pcVar5 != (char *)0x0) {
    iVar4 = strcasecmp(pcVar5,"1x2");
    if (iVar4 == 0) {
      uVar6 = 1;
    }
    else {
      iVar4 = strcasecmp(pcVar5,"2x1");
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      else {
        iVar4 = strcasecmp(pcVar5,"2x2");
        if (iVar4 == 0) {
          uVar6 = 3;
        }
        else {
          iVar4 = strcasecmp(pcVar5,"2x4");
          if (iVar4 == 0) {
            uVar6 = 4;
          }
          else {
            iVar4 = strcasecmp(pcVar5,"4x2");
            if (iVar4 == 0) {
              uVar6 = 5;
            }
            else {
              iVar4 = strcasecmp(pcVar5,"4x4");
              if (iVar4 != 0) goto LAB_00908330;
              uVar6 = 6;
            }
          }
        }
      }
    }
    *(undefined4 *)(lVar16 + 0x298) = uVar6;
  }
LAB_00908330:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


