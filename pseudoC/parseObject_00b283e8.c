// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseObject
// Entry Point: 00b283e8
// Size: 632 bytes
// Signature: undefined __cdecl parseObject(Object * param_1, char * * param_2, ParamSet * param_3)


/* JSONUtil::parseObject(JSONUtil::Object&, char const*&, JSONUtil::ParamSet const*) */

void JSONUtil::parseObject(Object *param_1,char **param_2,ParamSet *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  byte local_68;
  void *local_58;
  undefined2 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar7 = (byte *)*param_2;
  bVar1 = *pbVar7;
  while (bVar1 - 1 < 0x20) {
    pbVar7 = pbVar7 + 1;
    *param_2 = (char *)pbVar7;
    bVar1 = *pbVar7;
  }
  if (bVar1 == 0x7b) {
    *param_2 = (char *)(pbVar7 + 1);
    bVar1 = pbVar7[1];
    if (bVar1 - 1 < 0x20) {
      pbVar3 = pbVar7 + 2;
      do {
        pbVar7 = pbVar3;
        *param_2 = (char *)pbVar7;
        bVar1 = *pbVar7;
        pbVar3 = pbVar7 + 1;
      } while (bVar1 - 1 < 0x20);
      pbVar7 = pbVar7 + -1;
    }
    if (bVar1 == 0x7d) {
      uVar4 = 1;
      *param_2 = (char *)(pbVar7 + 2);
      goto LAB_00b2862c;
    }
    do {
      local_80 = 0;
      uStack_78 = 0;
      local_70 = (void *)0x0;
                    /* try { // try from 00b284b0 to 00b284bf has its CatchHandler @ 00b28694 */
      uVar5 = parseString((basic_string *)&local_80,param_2,param_3);
      if ((uVar5 & 1) == 0) {
LAB_00b285ac:
        iVar9 = 1;
        iVar8 = 1;
      }
      else {
        pbVar7 = (byte *)*param_2;
        bVar1 = *pbVar7;
        while (bVar1 - 1 < 0x20) {
          pbVar7 = pbVar7 + 1;
          *param_2 = (char *)pbVar7;
          bVar1 = *pbVar7;
        }
        if (bVar1 != 0x3a) goto LAB_00b285ac;
        *param_2 = (char *)(pbVar7 + 1);
                    /* try { // try from 00b28504 to 00b2852f has its CatchHandler @ 00b28690 */
        puVar6 = (undefined2 *)operator_new(0x10);
        *puVar6 = 0;
        uVar5 = parse((Atom *)puVar6,param_2,param_3);
        if ((uVar5 & 1) == 0) {
          Atom::clear();
          operator_delete(puVar6);
          goto LAB_00b285ac;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_68);
                    /* try { // try from 00b28534 to 00b28543 has its CatchHandler @ 00b28660 */
        local_50 = puVar6;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,JSONUtil::Atom*>>>
                    *)param_1,(basic_string *)&local_68,(pair *)&local_68);
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
        pbVar7 = (byte *)*param_2;
        bVar1 = *pbVar7;
        while (bVar1 - 1 < 0x20) {
          pbVar7 = pbVar7 + 1;
          *param_2 = (char *)pbVar7;
          bVar1 = *pbVar7;
        }
        if (bVar1 == 0x2c) {
          *param_2 = (char *)(pbVar7 + 1);
          bVar1 = pbVar7[1];
          if (bVar1 - 1 < 0x20) {
            pbVar3 = pbVar7 + 2;
            do {
              pbVar7 = pbVar3;
              *param_2 = (char *)pbVar7;
              bVar1 = *pbVar7;
              pbVar3 = pbVar7 + 1;
            } while (bVar1 - 1 < 0x20);
            pbVar7 = pbVar7 + -1;
          }
          if (bVar1 == 0x7d) {
            pbVar7 = pbVar7 + 2;
            goto LAB_00b285fc;
          }
          iVar9 = 0;
          iVar8 = 0;
        }
        else {
          if (bVar1 != 0x7d) goto LAB_00b285ac;
          pbVar7 = pbVar7 + 1;
LAB_00b285fc:
          iVar9 = 3;
          iVar8 = 3;
          *param_2 = (char *)pbVar7;
        }
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
        iVar8 = iVar9;
      }
    } while (iVar8 == 0);
    if (iVar8 != 1) {
      uVar4 = 1;
      goto LAB_00b2862c;
    }
  }
  uVar4 = 0;
LAB_00b2862c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


