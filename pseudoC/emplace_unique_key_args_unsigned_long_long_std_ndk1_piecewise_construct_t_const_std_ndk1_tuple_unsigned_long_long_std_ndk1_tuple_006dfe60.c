// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
// Entry Point: 006dfe60
// Size: 288 bytes
// Signature: pair __cdecl __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>(ulonglong * param_1, piecewise_construct_t * param_2, tuple * param_3, tuple * param_4)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> >, std::__ndk1::__map_value_compare<unsigned long long,
   std::__ndk1::__value_type<unsigned long long, Lockable<FileManager::AccessHistory> >,
   std::__ndk1::less<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long,
   Lockable<FileManager::AccessHistory> > > >::__emplace_unique_key_args<unsigned long long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long long&&>,
   std::__ndk1::tuple<> >(unsigned long long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long long&&>&&, std::__ndk1::tuple<>&&) */

pair std::__ndk1::
     __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
     ::
     __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
               (ulonglong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong **ppuVar4;
  ulonglong **ppuVar5;
  ulonglong **ppuVar6;
  ulonglong **ppuVar7;
  
  ppuVar4 = (ulonglong **)(param_1 + 1);
  ppuVar5 = (ulonglong **)*ppuVar4;
  ppuVar7 = ppuVar4;
  if (ppuVar5 != (ulonglong **)0x0) {
    ppuVar4 = (ulonglong **)(param_1 + 1);
    do {
      while (ppuVar6 = ppuVar5, ppuVar7 = ppuVar6, *(ulonglong **)param_2 < ppuVar6[4]) {
        ppuVar4 = ppuVar6;
        ppuVar5 = (ulonglong **)*ppuVar6;
        if ((ulonglong **)*ppuVar6 == (ulonglong **)0x0) {
          puVar3 = *ppuVar6;
          goto joined_r0x006dfed4;
        }
      }
      if (*(ulonglong **)param_2 <= ppuVar6[4]) break;
      ppuVar4 = ppuVar6 + 1;
      ppuVar5 = (ulonglong **)*ppuVar4;
    } while ((ulonglong **)*ppuVar4 != (ulonglong **)0x0);
  }
  puVar3 = *ppuVar4;
  ppuVar6 = ppuVar4;
joined_r0x006dfed4:
  if (puVar3 == (ulonglong *)0x0) {
    puVar3 = (ulonglong *)operator_new(0xce8);
    puVar3[4] = **(ulonglong **)param_4;
                    /* try { // try from 006dff08 to 006dff0f has its CatchHandler @ 006dff80 */
    Mutex::Mutex((Mutex *)(puVar3 + 5),true);
    memset(puVar3 + 10,0,0xc98);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = (ulonglong)ppuVar7;
    *ppuVar6 = puVar3;
    puVar2 = (ulonglong *)*param_1;
    *(undefined4 *)(puVar3 + 0x19b) = 100;
    puVar1 = puVar3;
    if (*puVar2 != 0) {
      *param_1 = *puVar2;
      puVar1 = *ppuVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],(__tree_node_base *)puVar1);
    param_1[2] = param_1[2] + 1;
  }
  return (pair)puVar3;
}


