// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LayerAttribute
// Entry Point: 008e7b00
// Size: 440 bytes
// Signature: undefined __thiscall LayerAttribute(LayerAttribute * this, char * param_1, char * param_2, float param_3, float param_4, map * param_5)


/* BaseTerrain::LayerAttribute::LayerAttribute(char const*, char const*, float, float,
   std::__ndk1::map<unsigned int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > > const&) */

void * __thiscall
BaseTerrain::LayerAttribute::LayerAttribute
          (LayerAttribute *this,char *param_1,char *param_2,float param_3,float param_4,map *param_5
          )

{
  __tree_iterator _Var1;
  size_t sVar2;
  void *pvVar3;
  map **ppmVar4;
  map **ppmVar5;
  map *pmVar6;
  undefined8 *puVar7;
  LayerAttribute *pLVar8;
  map **ppmVar9;
  ulong uVar10;
  
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pLVar8 = this + 1;
    *this = SUB41((int)sVar2 << 1,0);
    if (sVar2 != 0) goto LAB_008e7b84;
  }
  else {
    uVar10 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pLVar8 = (LayerAttribute *)operator_new(uVar10);
    *(size_t *)(this + 8) = sVar2;
    *(LayerAttribute **)(this + 0x10) = pLVar8;
    *(ulong *)this = uVar10 | 1;
LAB_008e7b84:
    memcpy(pLVar8,param_1,sVar2);
  }
  pLVar8[sVar2] = (LayerAttribute)0x0;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 008e7cb0 to 008e7cb7 has its CatchHandler @ 008e7cb8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pLVar8 = this + 0x19;
    this[0x18] = SUB41((int)sVar2 << 1,0);
    if (sVar2 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_008e7bfc;
    }
  }
  else {
    uVar10 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008e7bd4 to 008e7bdb has its CatchHandler @ 008e7cb8 */
    pLVar8 = (LayerAttribute *)operator_new(uVar10);
    *(size_t *)(this + 0x20) = sVar2;
    *(LayerAttribute **)(this + 0x28) = pLVar8;
    *(ulong *)(this + 0x18) = uVar10 | 1;
  }
  pvVar3 = memcpy(pLVar8,param_2,sVar2);
LAB_008e7bfc:
  pLVar8[sVar2] = (LayerAttribute)0x0;
  puVar7 = (undefined8 *)(this + 0x40);
  *puVar7 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 **)(this + 0x38) = puVar7;
  ppmVar9 = *(map ***)param_5;
  *(float *)(this + 0x30) = param_3;
  *(float *)(this + 0x34) = param_4;
  if (ppmVar9 != (map **)(param_5 + 8)) {
    do {
                    /* try { // try from 008e7c34 to 008e7c43 has its CatchHandler @ 008e7cc8 */
      _Var1 = std::__ndk1::
              __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::
              __emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
                        ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)(this + 0x38),(__tree_const_iterator)puVar7,(uint *)(ppmVar9 + 4),
                         (pair *)(ppmVar9 + 4));
      pvVar3 = (void *)(ulong)_Var1;
      ppmVar4 = (map **)ppmVar9[1];
      if ((map **)ppmVar9[1] == (map **)0x0) {
        ppmVar4 = ppmVar9 + 2;
        ppmVar5 = (map **)*ppmVar4;
        if ((map **)*ppmVar5 != ppmVar9) {
          do {
            pmVar6 = *ppmVar4;
            ppmVar4 = (map **)(pmVar6 + 0x10);
            ppmVar5 = (map **)*ppmVar4;
          } while (*ppmVar5 != pmVar6);
        }
      }
      else {
        do {
          ppmVar5 = ppmVar4;
          ppmVar4 = (map **)*ppmVar5;
        } while ((map **)*ppmVar5 != (map **)0x0);
      }
      ppmVar9 = ppmVar5;
    } while (ppmVar5 != (map **)(param_5 + 8));
  }
  return pvVar3;
}


