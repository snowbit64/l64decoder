// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007acd6c
// Entry Point: 007acd6c
// Size: 1676 bytes
// Signature: undefined FUN_007acd6c(void)


void FUN_007acd6c(GsMaterial *param_1,char **param_2)

{
  GsMaterial **ppGVar1;
  GsMaterial **ppGVar2;
  byte bVar3;
  long lVar4;
  void *__src;
  int iVar5;
  CustomShader *this;
  MaterialManager *pMVar6;
  ulong uVar7;
  void *__dest;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  GsMaterial **ppGVar19;
  undefined8 uVar20;
  uint local_2fc;
  uint local_2e4;
  ulong local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined **local_2b8;
  char *pcStack_2b0;
  undefined local_2a8;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined2 local_254;
  undefined local_252;
  undefined8 local_250;
  undefined8 local_248;
  uint local_240;
  char *local_238 [4];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8 [5];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this = (CustomShader *)GsMaterial::getCustomShader();
  if (this != (CustomShader *)0x0) {
    pcVar16 = *param_2;
    if (*pcVar16 == '\0') {
      uVar15 = 0;
LAB_007ace10:
      uVar14 = (uint)uVar15;
      if (*(uint *)(param_1 + 0x88) != uVar14) {
        if (*(char *)(param_2 + 2) == '\0') {
          local_2b8 = &PTR__MaterialDesc_00fd99f8;
          pcStack_2b0 = "UnnamedMaterial";
          local_27c = 0xffffffffffffffff;
          local_2a8 = 1;
          uStack_29c = 0;
          local_2a4 = 0;
          uStack_26c = 0x3f0000003fc00000;
          local_274 = 0x3f0000003f000000;
          uStack_28c = 0;
          local_294 = 0;
          local_284 = 0;
          local_264 = 0;
          local_260 = 0x3f0000003f800000;
          local_258 = 0x3d0f5c29;
          local_254 = 1;
          local_252 = 0;
          local_250 = 0;
          local_248 = 0;
          local_238[1] = (char *)0x0;
          local_238[0] = (char *)0x0;
          local_238[3] = (char *)0x0;
          local_238[2] = (char *)0x0;
          uStack_210 = 0;
          local_218 = 0;
          uStack_200 = 0;
          uStack_208 = 0;
          uStack_1f0 = 0;
          local_1f8 = 0;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          uStack_1d0 = 0;
          local_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          local_1b8[1] = 0;
          local_1b8[0] = 0;
          local_1b8[3] = 0;
          local_1b8[2] = 0;
          uStack_190 = 0;
          local_1b8[4] = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_170 = 0;
          local_178 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_150 = 0;
          local_158 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_110 = 0;
          local_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          local_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          local_d8 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          local_240 = 0;
          local_78 = 0;
          GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
          lVar9 = *(long *)(this + 0x110);
          uVar17 = (ulong)*(uint *)(param_1 + 0x88);
          uVar18 = (*(long *)(this + 0x118) - lVar9 >> 5) * 0x6db6db6db6db6db7;
          uVar10 = 0;
          if (uVar17 <= uVar18 && uVar18 - uVar17 != 0) {
            lVar11 = lVar9 + uVar17 * 0xe0;
            uVar10 = (uint)((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40)) >> 3);
          }
          if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
            local_2fc = 0;
          }
          else {
            lVar11 = lVar9 + uVar15 * 0xe0;
            local_2fc = (uint)((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40)) >> 3);
            if (0x13 < local_2fc) {
              local_2fc = 0x14;
            }
          }
          local_2d0 = 0;
          uStack_2c8 = 0;
          local_2c0 = 0;
          if (uVar10 != 0) {
            uVar18 = 0;
            puVar13 = local_1b8;
            while( true ) {
              pbVar8 = *(byte **)(*(long *)(lVar9 + uVar17 * 0xe0 + 0x40) + uVar18 * 8);
              pbVar12 = *(byte **)(pbVar8 + 0x10);
              if ((*pbVar8 & 1) == 0) {
                pbVar12 = pbVar8 + 1;
              }
              uVar7 = CustomShader::getParameterIndex
                                (this,uVar14,(char *)pbVar12,(uint *)&local_2e0);
              if ((uVar7 & 1) != 0) {
                uVar7 = local_2e0 & 0xffffffff;
                if (((uint)local_2e0 < 0x14) &&
                   (*(undefined *)((long)&local_2d0 + uVar7) = 1, uVar18 != uVar7)) {
                  uVar20 = *puVar13;
                  local_1b8[uVar7 * 2 + 1] = puVar13[1];
                  local_1b8[uVar7 * 2] = uVar20;
                }
              }
              if ((ulong)uVar10 - 1 == uVar18) break;
              lVar9 = *(long *)(this + 0x110);
              puVar13 = puVar13 + 2;
              uVar18 = uVar18 + 1;
            }
          }
          if (local_2fc != 0) {
            uVar18 = 0;
            puVar13 = local_1b8;
            do {
              if (*(char *)((long)&local_2d0 + uVar18) == '\0') {
                lVar9 = *(long *)(*(long *)(*(long *)(this + 0x110) + uVar15 * 0xe0 + 0x40) +
                                 uVar18 * 8);
                uVar20 = *(undefined8 *)(lVar9 + 0x30);
                puVar13[1] = *(undefined8 *)(lVar9 + 0x38);
                *puVar13 = uVar20;
              }
              uVar18 = uVar18 + 1;
              puVar13 = puVar13 + 2;
            } while (local_2fc != uVar18);
          }
          lVar9 = *(long *)(this + 0x110);
          local_240 = local_2fc;
          local_2e0 = 0;
          uStack_2d8 = 0;
          uVar18 = (*(long *)(this + 0x118) - lVar9 >> 5) * 0x6db6db6db6db6db7;
          if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
            uVar10 = 0;
          }
          else {
            lVar11 = lVar9 + uVar17 * 0xe0;
            uVar10 = (uint)((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) >> 3);
          }
          if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
            local_2fc = 0;
          }
          else {
            lVar11 = lVar9 + uVar15 * 0xe0;
            local_2fc = (uint)((ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) >> 3);
            if (0xf < local_2fc) {
              local_2fc = 0x10;
            }
          }
          if (uVar10 != 0) {
            lVar11 = 0;
            while( true ) {
              pbVar8 = *(byte **)(*(long *)(lVar9 + uVar17 * 0xe0 + 0x58) + lVar11);
              pbVar12 = *(byte **)(pbVar8 + 0x10);
              if ((*pbVar8 & 1) == 0) {
                pbVar12 = pbVar8 + 1;
              }
              uVar18 = CustomShader::getTextureIndex(this,uVar14,(char *)pbVar12,&local_2e4);
              if (((uVar18 & 1) != 0) && (local_2e4 < 0x10)) {
                pcVar16 = *(char **)((long)local_238 + lVar11);
                *(undefined *)((long)&local_2e0 + (ulong)local_2e4) = 1;
                local_238[local_2e4] = pcVar16;
              }
              if ((ulong)uVar10 * 8 + -8 == lVar11) break;
              lVar9 = *(long *)(this + 0x110);
              lVar11 = lVar11 + 8;
            }
          }
          if (local_2fc != 0) {
            uVar18 = 0;
            do {
              if (*(char *)((long)&local_2e0 + uVar18) == '\0') {
                lVar9 = *(long *)(*(long *)(*(long *)(this + 0x110) + uVar15 * 0xe0 + 0x58) +
                                 uVar18 * 8);
                bVar3 = *(byte *)(lVar9 + 0x18);
                uVar17 = (ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  uVar17 = *(ulong *)(lVar9 + 0x20);
                }
                if (uVar17 == 0) {
                  pcVar16 = (char *)0x0;
                }
                else {
                  if ((bVar3 & 1) == 0) {
                    pcVar16 = (char *)(lVar9 + 0x19);
                  }
                  else {
                    pcVar16 = *(char **)(lVar9 + 0x28);
                    if (pcVar16 == (char *)0x0) goto LAB_007ad26c;
                  }
                  pcVar16 = (char *)TextureUtil::loadMaterialTexture
                                              (pcVar16,*(bool *)(lVar9 + 0x30),1);
                }
LAB_007ad26c:
                local_238[uVar18] = pcVar16;
              }
              uVar18 = uVar18 + 1;
            } while (local_2fc != uVar18);
          }
          local_248 = CONCAT44(local_2fc,uVar14);
          pMVar6 = (MaterialManager *)MaterialManager::getInstance();
          param_1 = (GsMaterial *)MaterialManager::getMaterial(pMVar6,(MaterialDesc *)&local_2b8);
        }
        else {
          GsMaterial::setCustomShaderVariation(param_1,uVar14,true);
          FUN_00f276d0(1,param_1 + 0x28);
          local_2b8 = &PTR__MaterialDesc_00fd99f8;
          local_2a8 = 1;
          pcStack_2b0 = "UnnamedMaterial";
          local_27c = 0xffffffffffffffff;
          uStack_29c = 0;
          local_2a4 = 0;
          uStack_28c = 0;
          local_294 = 0;
          uStack_26c = 0x3f0000003fc00000;
          local_274 = 0x3f0000003f000000;
          local_284 = 0;
          local_264 = 0;
          local_260 = 0x3f0000003f800000;
          local_258 = 0x3d0f5c29;
          local_254 = 1;
          local_252 = 0;
          local_250 = 0;
          local_248 = 0;
          local_238[1] = (char *)0x0;
          local_238[0] = (char *)0x0;
          local_238[3] = (char *)0x0;
          local_238[2] = (char *)0x0;
          uStack_210 = 0;
          local_218 = 0;
          uStack_200 = 0;
          uStack_208 = 0;
          uStack_1f0 = 0;
          local_1f8 = 0;
          uStack_1e0 = 0;
          uStack_1e8 = 0;
          uStack_1d0 = 0;
          local_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          local_1b8[1] = 0;
          local_1b8[0] = 0;
          local_1b8[3] = 0;
          local_1b8[2] = 0;
          uStack_190 = 0;
          local_1b8[4] = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_170 = 0;
          local_178 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_150 = 0;
          local_158 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_110 = 0;
          local_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          local_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          local_d8 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          uStack_88 = 0;
          local_240 = 0;
          local_78 = 0;
          GsMaterial::saveToDesc(param_1,(MaterialDesc *)&local_2b8);
          pMVar6 = (MaterialManager *)MaterialManager::getInstance();
          MaterialManager::changeMaterial
                    (pMVar6,param_1,(MaterialDesc *)&local_2b8,3,(GsMaterial **)0x0);
        }
        __src = EngineScriptBinding::s_tempMaterials;
        if (DAT_010531e0 == DAT_010531e8) {
          uVar18 = (long)DAT_010531e0 - (long)EngineScriptBinding::s_tempMaterials;
          uVar15 = ((long)uVar18 >> 3) + 1;
          if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar15 <= (ulong)((long)uVar18 >> 2)) {
            uVar15 = (long)uVar18 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar15 = 0x1fffffffffffffff;
          }
          if (uVar15 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar15 << 3);
          }
          ppGVar1 = (GsMaterial **)((long)__dest + ((long)uVar18 >> 3) * 8);
          ppGVar2 = (GsMaterial **)((long)__dest + uVar15 * 8);
          ppGVar19 = ppGVar1 + 1;
          *ppGVar1 = param_1;
          if (0 < (long)uVar18) {
            memcpy(__dest,__src,uVar18);
          }
          EngineScriptBinding::s_tempMaterials = __dest;
          DAT_010531e0 = ppGVar19;
          DAT_010531e8 = ppGVar2;
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *DAT_010531e0 = param_1;
          DAT_010531e0 = DAT_010531e0 + 1;
        }
      }
    }
    else {
      lVar9 = *(long *)(this + 0x110);
      uVar18 = (*(long *)(this + 0x118) - lVar9 >> 5) * 0x6db6db6db6db6db7;
      if (1 < uVar18) {
        uVar15 = 1;
        do {
          iVar5 = strcmp(*(char **)(lVar9 + uVar15 * 0xe0),pcVar16);
          if (iVar5 == 0) goto LAB_007ace10;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar15 <= uVar18 && uVar18 - uVar15 != 0);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x21) = 1;
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


