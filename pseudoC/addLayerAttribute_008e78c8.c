// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLayerAttribute
// Entry Point: 008e78c8
// Size: 548 bytes
// Signature: undefined __thiscall addLayerAttribute(BaseTerrain * this, char * param_1, char * param_2, float param_3, float param_4, map * param_5)


/* BaseTerrain::addLayerAttribute(char const*, char const*, float, float, std::__ndk1::map<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >, std::__ndk1::less<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > > const&) */

void __thiscall
BaseTerrain::addLayerAttribute
          (BaseTerrain *this,char *param_1,char *param_2,float param_3,float param_4,map *param_5)

{
  ulong *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  __tree_node **local_80;
  __tree_node *local_78;
  ulong local_70;
  long local_68;
  
  puVar3 = LayerAttribute::TYPE_ENUM;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 != (char *)0x0) {
    uVar5 = 0;
    if ((param_2 == (char *)0x0) || (*param_1 == '\0')) goto LAB_008e79cc;
    if (*param_2 != '\0') {
      sVar6 = strlen(LayerAttribute::TYPE_ENUM);
      iVar4 = strncmp(param_2,puVar3,sVar6);
      puVar3 = LayerAttribute::TYPE_FLOAT;
      if (iVar4 != 0) {
        sVar6 = strlen(LayerAttribute::TYPE_FLOAT);
        iVar4 = strncmp(param_2,puVar3,sVar6);
        puVar3 = LayerAttribute::TYPE_FLOAT_LINEAR_RGB;
        if (iVar4 != 0) {
          sVar6 = strlen(LayerAttribute::TYPE_FLOAT_LINEAR_RGB);
          iVar4 = strncmp(param_2,puVar3,sVar6);
          if (iVar4 != 0) goto LAB_008e79c8;
        }
      }
      puVar3 = LayerAttribute::TYPE_ENUM;
      sVar6 = strlen(LayerAttribute::TYPE_ENUM);
      iVar4 = strncmp(param_2,puVar3,sVar6);
      if ((iVar4 != 0) || (*(long *)(param_5 + 0x10) != 0)) {
        LayerAttribute::LayerAttribute
                  ((LayerAttribute *)&local_b8,param_1,param_2,param_3,param_4,param_5);
        puVar1 = *(ulong **)(this + 0x70);
        if (puVar1 < *(ulong **)(this + 0x78)) {
          puVar1[2] = (ulong)local_a8;
          puVar1[1] = uStack_b0;
          *puVar1 = local_b8;
          local_b8 = 0;
          uStack_b0 = 0;
          puVar1[4] = uStack_98;
          puVar1[3] = local_a0;
          puVar1[5] = (ulong)local_90;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = (void *)0x0;
          puVar1[6] = local_88;
          puVar1[7] = (ulong)local_80;
          puVar1[8] = (ulong)local_78;
          puVar1[9] = local_70;
          if (local_70 == 0) {
            puVar1[7] = (ulong)(puVar1 + 8);
          }
          else {
            local_80 = &local_78;
            *(ulong **)(local_78 + 0x10) = puVar1 + 8;
            local_78 = (__tree_node *)0x0;
            local_70 = 0;
          }
          *(ulong **)(this + 0x70) = puVar1 + 10;
        }
        else {
                    /* try { // try from 008e7a94 to 008e7a9b has its CatchHandler @ 008e7aec */
          std::__ndk1::
          vector<BaseTerrain::LayerAttribute,std::__ndk1::allocator<BaseTerrain::LayerAttribute>>::
          __push_back_slow_path<BaseTerrain::LayerAttribute>
                    ((vector<BaseTerrain::LayerAttribute,std::__ndk1::allocator<BaseTerrain::LayerAttribute>>
                      *)(this + 0x68),(LayerAttribute *)&local_b8);
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)&local_80,local_78);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        uVar5 = 1;
        goto LAB_008e79cc;
      }
    }
  }
LAB_008e79c8:
  uVar5 = 0;
LAB_008e79cc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


