// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00aadb6c
// Size: 3084 bytes
// Signature: undefined __thiscall init(VulkanTextureObject * this, VulkanCommandBuffer * param_1, TextureObjectDesc * param_2)


/* VulkanTextureObject::init(VulkanCommandBuffer*, TextureObjectDesc const&) */

void __thiscall
VulkanTextureObject::init
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,TextureObjectDesc *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  PIXEL_FORMAT PVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  VulkanTextureObject VVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  void **ppvVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long *this_00;
  VulkanBufferResource *this_01;
  void *pvVar22;
  float *pfVar23;
  float *pfVar24;
  PIXEL_FORMAT_USAGE PVar25;
  uint uVar26;
  undefined4 uVar27;
  BUFFER_TYPE BVar28;
  long lVar29;
  float *pfVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  void **ppvVar39;
  void **ppvVar40;
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  float *__src;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined8 uVar47;
  VulkanTextureObject *local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined2 local_78;
  VulkanTextureObject local_76;
  VulkanTextureObject local_75;
  VulkanTextureObject local_74;
  VulkanTextureObject local_73;
  VulkanTextureObject local_72;
  long local_70;
  
  lVar17 = tpidr_el0;
  local_70 = *(long *)(lVar17 + 0x28);
  uVar20 = *(uint *)(param_2 + 0x34);
  *(uint *)(this + 0x24) = uVar20;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x28);
  uVar31 = *(uint *)(param_2 + 0x2c);
  *(uint *)(this + 0x1c) = uVar31;
  uVar47 = NEON_cmeq(*(undefined8 *)(param_2 + 0x14),0,4);
  uVar47 = NEON_bit(*(undefined8 *)(param_2 + 0x14),0x100000001,uVar47,1);
  *(undefined8 *)(this + 0x28) = uVar47;
  iVar33 = *(int *)(param_2 + 0x1c);
  if (iVar33 == 0) {
    iVar33 = 1;
  }
  if (iVar33 == -1) {
    iVar33 = 1;
  }
  *(int *)(this + 0x30) = iVar33;
  iVar33 = *(int *)(param_2 + 0x20);
  if (iVar33 == 0) {
    iVar33 = 1;
  }
  *(int *)(this + 0x34) = iVar33;
  uVar31 = *(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)uVar31 * 0x18 + 0xc);
  this[0x4f] = (VulkanTextureObject)((byte)(uVar20 >> 0x11) & 1);
  this[0x4e] = (VulkanTextureObject)((byte)(uVar20 >> 4) & 1);
  uVar26 = uVar31 >> 5 & 1;
  this[0x56] = (VulkanTextureObject)((byte)(uVar20 >> 0x10) & 1);
  this[0x50] = SUB41(uVar26,0);
  iVar33 = *(int *)(param_2 + 0xc);
  *(int *)(this + 0x38) = iVar33;
  this[0x3c] = (VulkanTextureObject)((uVar31 & 0x220) == 0x200);
  if ((uVar20 >> 4 & 1) != 0) {
    if (uVar26 == 0) {
      uVar47 = *(undefined8 *)(param_2 + 0x3c);
      iVar33 = *(int *)(this + 0x38);
      *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_2 + 0x44);
      *(undefined8 *)(this + 0x78) = uVar47;
    }
    else {
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_2 + 0x4c);
    }
  }
  if (iVar33 == -1) {
    if (*(int *)(this + 0x18) == 4) {
LAB_00aadcc0:
      iVar33 = 0;
    }
    else {
      uVar20 = *(uint *)(this + 0x30);
      uVar26 = 4;
      if (this[0x4e] != (VulkanTextureObject)0x0) {
        uVar26 = 1;
      }
      uVar34 = *(uint *)(this + 0x2c);
      if (*(uint *)(this + 0x28) <= *(uint *)(this + 0x2c)) {
        uVar34 = *(uint *)(this + 0x28);
      }
      if ((uVar34 <= uVar20 || uVar20 == 0) || uVar20 < uVar34 && uVar20 == 1) {
        uVar20 = uVar34;
      }
      if (uVar20 <= uVar26) goto LAB_00aadcc0;
      iVar33 = 0;
      do {
        iVar33 = iVar33 + 1;
        uVar20 = uVar20 >> 1;
      } while (uVar26 < uVar20);
    }
    *(int *)(this + 0x38) = iVar33;
  }
  local_98 = *(VulkanTextureObject **)(*(long *)(this + 8) + 0x20);
  uVar20 = VulkanUtil::getMaxUsableSampleCount((VkPhysicalDevice_T **)&local_98);
  uVar26 = *(uint *)(param_2 + 0x38);
  if (uVar26 == 0) {
    uVar26 = 1;
  }
  if (uVar26 <= uVar20) {
    uVar20 = uVar26;
  }
  *(uint *)(this + 0x40) = uVar20;
  VVar14 = *(VulkanTextureObject *)(param_2 + 0x30);
  this[0x4d] = VVar14;
  uVar20 = *(uint *)(param_2 + 0x34);
  *(undefined4 *)(this + 0x8c) = 1;
  this[0x51] = (VulkanTextureObject)((byte)(uVar20 >> 5) & 1);
  this[0x52] = (VulkanTextureObject)((byte)(uVar20 >> 0xd) & 1);
  if (*(int *)(this + 0x18) == 4) {
    PVar25 = 2;
  }
  else if (this[0x4e] == (VulkanTextureObject)0x0) {
    PVar25 = (PIXEL_FORMAT_USAGE)(byte)this[0x3c];
  }
  else if (this[0x50] == (VulkanTextureObject)0x0) {
    PVar25 = 3;
  }
  else {
    PVar25 = 4;
    *(undefined4 *)(this + 0x8c) = 2;
  }
  uVar20 = VulkanUtil::getNativePixelFormat
                     (*(VkPhysicalDevice_T **)(*(long *)(this + 8) + 0x20),
                      *(PIXEL_FORMAT *)(this + 0x1c),PVar25,VVar14 != (VulkanTextureObject)0x0);
  *(uint *)(this + 0x20) = uVar20;
  *(undefined4 *)(this + 0xa8) = 0;
  if (this[0x50] == (VulkanTextureObject)0x0) {
    if ((*(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)uVar20 * 0x18 + 0xc) >> 4 & 1) != 0) {
      uVar27 = 1;
      if ((*(uint *)(PixelFormatUtil::s_pixelFormats + (ulong)uVar20 * 0x18 + 0xc) & 0x80) != 0) {
        uVar27 = 2;
      }
      goto LAB_00aaddb8;
    }
  }
  else {
    uVar27 = 3;
LAB_00aaddb8:
    *(undefined4 *)(this + 0xa8) = uVar27;
  }
  uVar20 = 1;
  *(undefined4 *)(this + 0x48) = 1;
  if (*(int *)(this + 0x18) == 2) {
    uVar20 = 6;
LAB_00aadde4:
    *(uint *)(this + 0x48) = uVar20;
  }
  else if (*(int *)(this + 0x18) == 3) {
    uVar20 = *(uint *)(this + 0x34);
    goto LAB_00aadde4;
  }
  uVar32 = (ulong)uVar20;
  lVar29 = *(long *)(this + 0x90);
  lVar35 = (long)*(void ***)(this + 0x98) - lVar29 >> 3;
  uVar36 = lVar35 * -0x5555555555555555;
  if (uVar32 <= uVar36) {
    if (uVar32 <= uVar36 && uVar36 - uVar32 != 0) {
      ppvVar39 = (void **)(lVar29 + uVar32 * 0x18);
      ppvVar40 = *(void ***)(this + 0x98);
      while (ppvVar18 = ppvVar40, ppvVar18 != ppvVar39) {
        ppvVar40 = ppvVar18 + -3;
        pvVar22 = *ppvVar40;
        if (pvVar22 != (void *)0x0) {
          ppvVar18[-2] = pvVar22;
          operator_delete(pvVar22);
        }
      }
      *(void ***)(this + 0x98) = ppvVar39;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>,std::__ndk1::allocator<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>>>
    ::__append((vector<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>,std::__ndk1::allocator<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>>>
                *)(this + 0x90),uVar32 + lVar35 * 0x5555555555555555);
  }
  if (*(int *)(this + 0x48) != 0) {
    uVar32 = 0;
    lVar29 = *(long *)(this + 0x90);
    uVar20 = *(uint *)(this + 0x38);
    do {
      this_00 = (long *)(lVar29 + uVar32 * 0x18);
      uVar36 = (ulong)(uVar20 + 1);
      uVar38 = this_00[1] - *this_00 >> 2;
      if (uVar38 < uVar36) {
        std::__ndk1::
        vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>::
        __append((vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>
                  *)this_00,uVar36 - uVar38);
        uVar20 = *(uint *)(this + 0x38);
        lVar29 = *(long *)(this + 0x90);
      }
      else if (uVar36 < uVar38) {
        this_00[1] = *this_00 + uVar36 * 4;
      }
      uVar26 = 0;
      lVar35 = *(long *)(lVar29 + uVar32 * 0x18);
      do {
        *(undefined4 *)(lVar35 + (ulong)uVar26 * 4) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar26 <= uVar20);
      uVar32 = uVar32 + 1;
    } while (uVar32 < *(uint *)(this + 0x48));
  }
  if (*(int *)(this + 0x18) == 4) {
    uVar20 = PixelFormatUtil::getMemorySize
                       (*(uint *)(this + 0x28),1,1,*(PIXEL_FORMAT *)(this + 0x20));
    this_01 = (VulkanBufferResource *)operator_new(0x98);
    BVar28 = 4;
    if (this[0x52] != (VulkanTextureObject)0x0) {
      BVar28 = 5;
    }
                    /* try { // try from 00aadf30 to 00aadf3f has its CatchHandler @ 00aae778 */
    VulkanBufferResource::VulkanBufferResource
              (this_01,*(VulkanRenderDevice **)(this + 8),param_1,uVar20,
               *(RESOURCE_USAGE *)(param_2 + 0x34),BVar28,(uchar *)0x0,
               *(PIXEL_FORMAT *)(this + 0x20));
    *(VulkanBufferResource **)(this + 0x10) = this_01;
  }
  else {
    local_78 = *(undefined2 *)(this + 0x4d);
    local_98 = (VulkanTextureObject *)CONCAT44(*(undefined4 *)(this + 0x20),*(int *)(this + 0x18));
    uStack_84 = *(undefined4 *)(this + 0x40);
    iStack_7c = *(int *)(this + 0x38) + 1;
    local_90 = *(undefined8 *)(this + 0x28);
    local_88 = *(uint *)(this + 0x30);
    local_80 = *(undefined4 *)(this + 0x34);
    local_75 = this[0x51];
    local_76 = this[0x4f];
    local_74 = this[0x3c];
    local_73 = this[0x52];
    local_72 = this[0x56];
    uVar47 = VulkanResourceAllocator::createTexture
                       (*(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370),
                        (TextureDesc *)&local_98,0,true);
    *(undefined8 *)(this + 0x10) = uVar47;
    if (this[0x4e] != (VulkanTextureObject)0x0) {
      createRenderTargetViews(this,(bool)((byte)(*(uint *)(param_2 + 0x34) >> 10) & 1));
    }
    if (this[0x51] == (VulkanTextureObject)0x0) {
      createShaderResourceViews(this,(bool)this[0x52]);
      createDescriptorImageInfos();
    }
  }
  iVar33 = *(int *)(this + 0x40);
  VVar14 = this[0x4e];
  if (iVar33 == 0) {
    iVar33 = 1;
  }
  iVar1 = 6;
  if (*(int *)(this + 0x18) != 2) {
    iVar1 = *(int *)(this + 0x34);
  }
  *(undefined4 *)(this + 0x44) =
       *(undefined4 *)(PixelFormatUtil::s_pixelFormats + (ulong)*(uint *)(this + 0x20) * 0x18 + 8);
  iVar21 = PixelFormatUtil::getMemorySize
                     (*(uint *)(this + 0x28),*(uint *)(this + 0x2c),*(uint *)(this + 0x30),
                      *(PIXEL_FORMAT *)(this + 0x1c));
  piVar4 = &VulkanRenderDevice::s_usedTextureMemory;
  if (VVar14 != (VulkanTextureObject)0x0) {
    piVar4 = &VulkanRenderDevice::s_usedRenderTargetMemory;
  }
  *piVar4 = *piVar4 + iVar1 * iVar33 * iVar21;
  __src = *(float **)param_2;
  if (__src != (float *)0x0) {
    iVar33 = *(int *)(this + 0x18);
    if (iVar33 == 4) {
      pvVar22 = (void *)VulkanBufferResource::lock
                                  (*(VulkanBufferResource **)(this + 0x10),param_1,0,
                                   *(int *)(this + 0x44) * *(int *)(this + 0x28),3);
      PVar8 = *(PIXEL_FORMAT *)(this + 0x1c);
      if (PVar8 == *(PIXEL_FORMAT *)(this + 0x20)) {
        uVar32 = PixelFormatUtil::getMemorySize(*(uint *)(this + 0x28),1,1,PVar8);
        memcpy(pvVar22,__src,uVar32 & 0xffffffff);
      }
      else {
        PixelFormatUtil::convertPixelFormat
                  (__src,0,0,PVar8,pvVar22,0,0,*(PIXEL_FORMAT *)(this + 0x20),*(uint *)(this + 0x28)
                   ,1,1);
      }
      VulkanBufferResource::unlock(*(VulkanBufferResource **)(this + 0x10),param_1);
    }
    else {
      bVar19 = false;
      if (((uVar31 >> 1 & 1) == 0) && (param_2[8] == (TextureObjectDesc)0x0)) {
        bVar19 = *(int *)(this + 0x38) != 0;
      }
      if (iVar33 == 2) {
        uVar20 = 6;
        iVar33 = 6;
joined_r0x00aae150:
        if (bVar19) goto LAB_00aae154;
LAB_00aae104:
        pfVar41 = (float *)0x0;
      }
      else {
        if (iVar33 != 3) {
          uVar20 = 1;
          iVar33 = 1;
          goto joined_r0x00aae150;
        }
        uVar20 = *(uint *)(this + 0x34);
        iVar33 = 1;
        if (!bVar19) goto LAB_00aae104;
LAB_00aae154:
        uVar9 = *(uint *)(this + 0x30);
        uVar32 = (ulong)*(uint *)(this + 0x1c);
        uVar10 = *(uint *)(this + 0x28);
        uVar11 = *(uint *)(this + 0x2c);
        uVar12 = *(uint *)(this + 0x38);
        uVar31 = 0;
        uVar16 = *(int *)(this + 0x34) * iVar33;
        uVar37 = uVar9 >> 1;
        iVar33 = 0;
        uVar34 = uVar11 >> 1;
        uVar26 = uVar10 >> 1;
        if (uVar10 < 2) {
          uVar26 = 1;
        }
        uVar13 = *(uint *)(PixelFormatUtil::s_pixelFormats + uVar32 * 0x18 + 0x10);
        if (uVar11 < 2) {
          uVar34 = 1;
        }
        if (uVar9 < 2) {
          uVar37 = 1;
        }
        do {
          uVar43 = uVar26 >> 1;
          uVar46 = uVar34 >> 1;
          iVar33 = iVar33 + uVar37 * uVar26 * uVar34;
          uVar45 = uVar37 >> 1;
          if (uVar46 + uVar43 + uVar45 == 0) break;
          uVar31 = uVar31 + 1;
          if (uVar26 < 2) {
            uVar43 = 1;
          }
          if (uVar34 < 2) {
            uVar46 = 1;
          }
          if (uVar37 < 2) {
            uVar45 = 1;
          }
          uVar26 = uVar43;
          uVar34 = uVar46;
          uVar37 = uVar45;
        } while (uVar31 <= uVar12 - 1);
        uVar31 = 0;
        if (uVar13 != 0) {
          uVar31 = *(uint *)(PixelFormatUtil::s_pixelFormats + uVar32 * 0x18 + 8) / uVar13;
        }
        pfVar41 = (float *)operator_new__((ulong)(iVar33 * uVar16 *
                                                 *(uint *)(PixelFormatUtil::s_pixelFormats +
                                                          uVar32 * 0x18 + 8)));
        if (uVar31 == 4) {
          if (((byte)PixelFormatUtil::s_pixelFormats[uVar32 * 0x18 + 0xc] >> 2 & 1) == 0) {
LAB_00aae3cc:
            uVar31 = uVar10;
            if (uVar10 == 0) {
              uVar31 = 1;
            }
            uVar26 = uVar11;
            if (uVar11 == 0) {
              uVar26 = 1;
            }
            uVar34 = uVar9;
            if (uVar9 == 0) {
              uVar34 = 1;
            }
            if (uVar16 != 0) {
              uVar37 = 0;
              VVar14 = this[0x4d];
              pfVar23 = __src;
              pfVar30 = pfVar41;
              do {
                if (uVar12 != 0) {
                  uVar43 = 1;
                  pfVar24 = pfVar23;
                  pfVar42 = pfVar30;
                  uVar46 = uVar10;
                  uVar45 = uVar11;
                  uVar44 = uVar9;
                  do {
                    uVar5 = uVar46 >> 1;
                    if (uVar46 < 2) {
                      uVar5 = 1;
                    }
                    uVar6 = uVar45 >> 1;
                    if (uVar45 < 2) {
                      uVar6 = 1;
                    }
                    uVar7 = uVar44 >> 1;
                    if (uVar44 < 2) {
                      uVar7 = 1;
                    }
                    if (VVar14 == (VulkanTextureObject)0x0) {
                      MipMapUtil::buildMipMap<unsigned_char>
                                ((uchar *)pfVar42,(uchar *)pfVar24,uVar46,uVar45,uVar44,uVar13);
                    }
                    else {
                      MipMapUtil::buildMipMapSRGB
                                ((uchar *)pfVar42,(uchar *)pfVar24,uVar46,uVar45,uVar44,uVar13);
                    }
                    uVar43 = uVar43 + 1;
                    uVar15 = uVar46 >> 1;
                    if (uVar46 < 2) {
                      uVar15 = uVar46;
                    }
                    uVar2 = uVar45 >> 1;
                    if (uVar45 < 2) {
                      uVar2 = uVar45;
                    }
                    uVar3 = uVar44 >> 1;
                    if (uVar44 < 2) {
                      uVar3 = uVar44;
                    }
                    pfVar30 = (float *)((long)pfVar42 + (ulong)(uVar7 * uVar13 * uVar6 * uVar5));
                    pfVar24 = pfVar42;
                    pfVar42 = pfVar30;
                    uVar46 = uVar15;
                    uVar45 = uVar2;
                    uVar44 = uVar3;
                  } while (uVar43 <= uVar12);
                }
                pfVar23 = (float *)((long)pfVar23 + (ulong)(uVar31 * uVar13 * uVar26 * uVar34));
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar16);
            }
          }
          else {
            MipMapUtil::buildMipMaps<float>
                      (pfVar41,__src,uVar10,uVar11,uVar9,uVar13,uVar16,uVar12,false);
          }
        }
        else if (uVar31 == 2) {
          uVar31 = uVar10;
          if (uVar10 == 0) {
            uVar31 = 1;
          }
          uVar26 = uVar11;
          if (uVar11 == 0) {
            uVar26 = 1;
          }
          uVar34 = uVar9;
          if (uVar9 == 0) {
            uVar34 = 1;
          }
          if (uVar16 != 0) {
            uVar37 = 0;
            pfVar30 = pfVar41;
            pfVar23 = __src;
            do {
              if (uVar12 != 0) {
                uVar43 = 1;
                pfVar24 = pfVar23;
                pfVar42 = pfVar30;
                uVar46 = uVar10;
                uVar45 = uVar11;
                uVar44 = uVar9;
                do {
                  uVar6 = uVar46 >> 1;
                  uVar7 = uVar45 >> 1;
                  uVar15 = uVar44 >> 1;
                  MipMapUtil::buildMipMap<unsigned_short>
                            ((ushort *)pfVar42,(ushort *)pfVar24,uVar46,uVar45,uVar44,uVar13);
                  uVar43 = uVar43 + 1;
                  uVar5 = uVar6;
                  if (uVar46 < 2) {
                    uVar6 = 1;
                    uVar5 = uVar46;
                  }
                  uVar2 = uVar7;
                  if (uVar45 < 2) {
                    uVar7 = 1;
                    uVar2 = uVar45;
                  }
                  uVar3 = uVar15;
                  if (uVar44 < 2) {
                    uVar15 = 1;
                    uVar3 = uVar44;
                  }
                  pfVar30 = (float *)((long)pfVar42 + (ulong)(uVar15 * uVar13 * uVar7 * uVar6) * 2);
                  pfVar24 = pfVar42;
                  pfVar42 = pfVar30;
                  uVar46 = uVar5;
                  uVar45 = uVar2;
                  uVar44 = uVar3;
                } while (uVar43 <= uVar12);
              }
              pfVar23 = (float *)((long)pfVar23 + (ulong)(uVar31 * uVar13 * uVar26 * uVar34) * 2);
              uVar37 = uVar37 + 1;
            } while (uVar37 != uVar16);
          }
        }
        else {
          if (uVar31 != 1) goto LAB_00aae3cc;
          uVar31 = uVar10;
          if (uVar10 == 0) {
            uVar31 = 1;
          }
          uVar26 = uVar11;
          if (uVar11 == 0) {
            uVar26 = 1;
          }
          uVar34 = uVar9;
          if (uVar9 == 0) {
            uVar34 = 1;
          }
          if (uVar16 != 0) {
            uVar37 = 0;
            VVar14 = this[0x4d];
            pfVar23 = __src;
            pfVar30 = pfVar41;
            do {
              if (uVar12 != 0) {
                uVar43 = 1;
                pfVar24 = pfVar23;
                pfVar42 = pfVar30;
                uVar46 = uVar10;
                uVar45 = uVar11;
                uVar44 = uVar9;
                do {
                  uVar5 = uVar46 >> 1;
                  if (uVar46 < 2) {
                    uVar5 = 1;
                  }
                  uVar6 = uVar45 >> 1;
                  if (uVar45 < 2) {
                    uVar6 = 1;
                  }
                  uVar7 = uVar44 >> 1;
                  if (uVar44 < 2) {
                    uVar7 = 1;
                  }
                  if (VVar14 == (VulkanTextureObject)0x0) {
                    MipMapUtil::buildMipMap<unsigned_char>
                              ((uchar *)pfVar42,(uchar *)pfVar24,uVar46,uVar45,uVar44,uVar13);
                  }
                  else {
                    MipMapUtil::buildMipMapSRGB
                              ((uchar *)pfVar42,(uchar *)pfVar24,uVar46,uVar45,uVar44,uVar13);
                  }
                  uVar43 = uVar43 + 1;
                  uVar15 = uVar46 >> 1;
                  if (uVar46 < 2) {
                    uVar15 = uVar46;
                  }
                  uVar2 = uVar45 >> 1;
                  if (uVar45 < 2) {
                    uVar2 = uVar45;
                  }
                  uVar3 = uVar44 >> 1;
                  if (uVar44 < 2) {
                    uVar3 = uVar44;
                  }
                  pfVar30 = (float *)((long)pfVar42 + (ulong)(uVar7 * uVar13 * uVar6 * uVar5));
                  pfVar24 = pfVar42;
                  pfVar42 = pfVar30;
                  uVar46 = uVar15;
                  uVar45 = uVar2;
                  uVar44 = uVar3;
                } while (uVar43 <= uVar12);
              }
              pfVar23 = (float *)((long)pfVar23 + (ulong)(uVar31 * uVar13 * uVar26 * uVar34));
              uVar37 = uVar37 + 1;
            } while (uVar37 != uVar16);
          }
        }
      }
      uploadTextureData(this,param_1,(uchar *)__src,(uchar *)pfVar41,uVar20,*(uint *)(this + 0x38),
                        (uint)(byte)param_1[0x460]);
      if (!(bool)(bVar19 ^ 1U | pfVar41 == (float *)0x0)) {
        operator_delete__(pfVar41);
      }
    }
  }
  if (*(int *)(this + 0x18) != 4) {
    if (this[0x4e] == (VulkanTextureObject)0x0) {
      if (this[0x51] != (VulkanTextureObject)0x0) goto LAB_00aae6dc;
      if (this[0x52] == (VulkanTextureObject)0x0) {
        if (*(long *)param_2 == 0) goto LAB_00aae6dc;
        local_90 = 0xffffffff00000003;
      }
      else {
        local_90 = 0xffffffff00000004;
      }
    }
    else {
      uVar27 = 5;
      if (this[0x50] != (VulkanTextureObject)0x0) {
        uVar27 = 6;
      }
      local_90 = CONCAT44(0xffffffff,uVar27);
    }
    local_88 = local_88 & 0xffffff00;
    local_98 = this;
    synchronizeTextures(param_1,(uint)(byte)param_1[0x460],1,(TransitionData *)&local_98);
  }
LAB_00aae6dc:
  this[0x4c] = (VulkanTextureObject)0x1;
  if (*(long *)(lVar17 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


