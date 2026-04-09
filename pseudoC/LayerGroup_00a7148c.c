// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LayerGroup
// Entry Point: 00a7148c
// Size: 332 bytes
// Signature: undefined __thiscall LayerGroup(LayerGroup * this, char * param_1, uint param_2, uint param_3, uint param_4, map * param_5)


/* BaseTerrain::LayerGroup::LayerGroup(char const*, unsigned int, unsigned int, unsigned int,
   std::__ndk1::map<unsigned int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > > const&) */

void * __thiscall
BaseTerrain::LayerGroup::LayerGroup
          (LayerGroup *this,char *param_1,uint param_2,uint param_3,uint param_4,map *param_5)

{
  __tree_iterator _Var1;
  size_t __n;
  void *pvVar2;
  map **ppmVar3;
  map **ppmVar4;
  map *pmVar5;
  undefined8 *puVar6;
  map **ppmVar7;
  LayerGroup *__dest;
  ulong uVar8;
  
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00a71520;
    }
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (LayerGroup *)operator_new(uVar8);
    *(size_t *)(this + 8) = __n;
    *(LayerGroup **)(this + 0x10) = __dest;
    *(ulong *)this = uVar8 | 1;
  }
  pvVar2 = memcpy(__dest,param_1,__n);
LAB_00a71520:
  __dest[__n] = (LayerGroup)0x0;
  puVar6 = (undefined8 *)(this + 0x30);
  *puVar6 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 **)(this + 0x28) = puVar6;
  ppmVar7 = *(map ***)param_5;
  *(uint *)(this + 0x18) = param_2;
  *(uint *)(this + 0x1c) = param_3;
  *(uint *)(this + 0x20) = param_4;
  if (ppmVar7 != (map **)(param_5 + 8)) {
    do {
                    /* try { // try from 00a7155c to 00a7156b has its CatchHandler @ 00a715d8 */
      _Var1 = std::__ndk1::
              __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::
              __emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
                        ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)(this + 0x28),(__tree_const_iterator)puVar6,(uint *)(ppmVar7 + 4),
                         (pair *)(ppmVar7 + 4));
      pvVar2 = (void *)(ulong)_Var1;
      ppmVar3 = (map **)ppmVar7[1];
      if ((map **)ppmVar7[1] == (map **)0x0) {
        ppmVar3 = ppmVar7 + 2;
        ppmVar4 = (map **)*ppmVar3;
        if ((map **)*ppmVar4 != ppmVar7) {
          do {
            pmVar5 = *ppmVar3;
            ppmVar3 = (map **)(pmVar5 + 0x10);
            ppmVar4 = (map **)*ppmVar3;
          } while (*ppmVar4 != pmVar5);
        }
      }
      else {
        do {
          ppmVar4 = ppmVar3;
          ppmVar3 = (map **)*ppmVar4;
        } while ((map **)*ppmVar4 != (map **)0x0);
      }
      ppmVar7 = ppmVar4;
    } while (ppmVar4 != (map **)(param_5 + 8));
  }
  return pvVar2;
}


