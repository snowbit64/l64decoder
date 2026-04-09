// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,int>const&>
// Entry Point: 009caa94
// Size: 304 bytes
// Signature: __tree_iterator __thiscall __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,int>const&>(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>> * this, pair * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int> >
   >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, int>
   const&>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, int> const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
::
__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,int>const&>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
           *this,pair *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  void *__s1;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *__s2;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)operator_new(0x40);
                    /* try { // try from 009caac0 to 009caacb has its CatchHandler @ 009cabc4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar5 + 4));
  puVar6 = (undefined8 *)(this + 8);
  puVar7 = (undefined8 *)*puVar6;
  *(pair *)(puVar5 + 7) = param_1[6];
  puVar8 = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = puVar5[5];
    __s1 = (void *)puVar5[6];
    if ((*(byte *)(puVar5 + 4) & 1) == 0) {
      __s1 = (void *)((long)puVar5 + 0x21);
      uVar2 = (ulong)(*(byte *)(puVar5 + 4) >> 1);
    }
    do {
      while( true ) {
        puVar8 = puVar7;
        bVar3 = *(byte *)(puVar8 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = puVar8[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)puVar8[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)puVar8 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) goto LAB_009caafc;
LAB_009cab54:
        puVar6 = puVar8;
        puVar7 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_009cab70;
      }
      if (uVar2 < uVar1) goto LAB_009cab54;
LAB_009caafc:
      puVar7 = (undefined8 *)puVar8[1];
    } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
    puVar6 = puVar8 + 1;
  }
LAB_009cab70:
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = puVar8;
  *puVar6 = puVar5;
  puVar7 = puVar5;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    puVar7 = (undefined8 *)*puVar6;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar7);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return (__tree_iterator)puVar5;
}


