// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_impl<std::__ndk1::pair<ParticleSystemDesc,unsigned_int>>
// Entry Point: 0092d734
// Size: 316 bytes
// Signature: pair __thiscall __emplace_unique_impl<std::__ndk1::pair<ParticleSystemDesc,unsigned_int>>(__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<SharedParticleSystemDesc,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<SharedParticleSystemDesc,
   unsigned int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int>,
   std::__ndk1::__map_value_compare<SharedParticleSystemDesc,
   std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int>,
   std::__ndk1::less<SharedParticleSystemDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int> >
   >::__emplace_unique_impl<std::__ndk1::pair<ParticleSystemDesc, unsigned int>
   >(std::__ndk1::pair<ParticleSystemDesc, unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
::__emplace_unique_impl<std::__ndk1::pair<ParticleSystemDesc,unsigned_int>>
          (__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
           *this,pair *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = (undefined8 *)operator_new(0xa8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x16);
  uVar8 = *(undefined8 *)(param_1 + 0x14);
  uVar12 = *(undefined8 *)(param_1 + 0x1a);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x1e);
  uVar13 = *(undefined8 *)(param_1 + 0x1c);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x12);
  puVar2[0xc] = uVar7;
  puVar2[0xf] = uVar9;
  puVar2[0xe] = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 2);
  uVar7 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 6);
  uVar9 = *(undefined8 *)(param_1 + 4);
  puVar2[0x11] = uVar12;
  puVar2[0x10] = uVar11;
  puVar2[0x13] = uVar14;
  puVar2[0x12] = uVar13;
  puVar2[5] = uVar8;
  puVar2[4] = uVar7;
  puVar2[7] = uVar10;
  puVar2[6] = uVar9;
  uVar10 = *(undefined8 *)(param_1 + 10);
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0xe);
  uVar7 = *(undefined8 *)(param_1 + 0xc);
  *(pair *)(puVar2 + 0x14) = param_1[0x2a];
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2[9] = uVar10;
  puVar2[8] = uVar9;
  puVar2[0xb] = uVar8;
  puVar2[10] = uVar7;
  puVar3 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar6 = puVar5;
        iVar1 = memcmp(puVar2 + 4,puVar6 + 4,0x80);
        puVar3 = puVar6;
        if (-1 < iVar1) break;
        puVar4 = puVar6;
        puVar5 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar6;
          goto joined_r0x0092d7f4;
        }
      }
      iVar1 = memcmp(puVar6 + 4,puVar2 + 4,0x80);
      if (-1 < iVar1) break;
      puVar4 = puVar6 + 1;
      puVar5 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)*puVar4;
  puVar6 = puVar4;
joined_r0x0092d7f4:
  if (puVar5 == (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar3;
    *puVar6 = puVar2;
    puVar3 = puVar2;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar3 = (undefined8 *)*puVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    puVar5 = puVar2;
  }
  else {
    operator_delete(puVar2);
  }
  return (pair)puVar5;
}


