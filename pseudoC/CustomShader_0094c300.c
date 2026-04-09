// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CustomShader
// Entry Point: 0094c300
// Size: 500 bytes
// Signature: undefined __thiscall ~CustomShader(CustomShader * this)


/* WARNING: Type propagation algorithm not settling */
/* CustomShader::~CustomShader() */

void __thiscall CustomShader::~CustomShader(CustomShader *this)

{
  CustomShader CVar1;
  Variation *pVVar2;
  void *pvVar3;
  void *pvVar4;
  Variation *this_00;
  Variation *pVVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__CustomShader_00fe0430;
                    /* try { // try from 0094c324 to 0094c327 has its CatchHandler @ 0094c4f4 */
  destroy();
  pvVar4 = *(void **)(this + 0x140);
  if (pvVar4 != (void *)0x0) {
    pvVar6 = pvVar4;
    pvVar3 = *(void **)(this + 0x148);
    if (*(void **)(this + 0x148) != pvVar4) {
      do {
        pvVar6 = (void *)((long)pvVar3 + -0x20);
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar3 = pvVar6;
      } while (pvVar6 != pvVar4);
      pvVar6 = *(void **)(this + 0x140);
    }
    *(void **)(this + 0x148) = pvVar4;
    operator_delete(pvVar6);
  }
  pvVar4 = *(void **)(this + 0x128);
  if (pvVar4 != (void *)0x0) {
    pvVar6 = pvVar4;
    pvVar3 = *(void **)(this + 0x130);
    if (*(void **)(this + 0x130) != pvVar4) {
      do {
        pvVar6 = (void *)((long)pvVar3 + -0x20);
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar3 = pvVar6;
      } while (pvVar6 != pvVar4);
      pvVar6 = *(void **)(this + 0x128);
    }
    *(void **)(this + 0x130) = pvVar4;
    operator_delete(pvVar6);
  }
  pVVar5 = *(Variation **)(this + 0x110);
  if (pVVar5 != (Variation *)0x0) {
    this_00 = *(Variation **)(this + 0x118);
    pVVar2 = pVVar5;
    if (this_00 != pVVar5) {
      do {
        this_00 = this_00 + -0xe0;
        Variation::~Variation(this_00);
      } while (this_00 != pVVar5);
      pVVar2 = *(Variation **)(this + 0x110);
    }
    *(Variation **)(this + 0x118) = pVVar5;
    operator_delete(pVVar2);
  }
  if (((byte)this[0xf0] & 1) == 0) {
    CVar1 = this[200];
  }
  else {
    operator_delete(*(void **)(this + 0x100));
    CVar1 = this[200];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    CVar1 = this[0xa0];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    CVar1 = this[0x78];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  std::__ndk1::__vector_base<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>::
  ~__vector_base((__vector_base<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>
                  *)(this + 0x58));
  std::__ndk1::
  __vector_base<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>::
  ~__vector_base((__vector_base<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>
                  *)(this + 0x40));
  pvVar4 = *(void **)(this + 0x28);
  if (pvVar4 != (void *)0x0) {
    pvVar6 = pvVar4;
    pvVar3 = *(void **)(this + 0x30);
    if (*(void **)(this + 0x30) != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar6 = (void *)((long)pvVar3 + -0x48);
        if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -0x20));
        }
        pvVar3 = pvVar6;
      } while (pvVar6 != pvVar4);
      pvVar6 = *(void **)(this + 0x28);
    }
    *(void **)(this + 0x30) = pvVar4;
    operator_delete(pvVar6);
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


