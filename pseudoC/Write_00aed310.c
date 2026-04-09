// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write
// Entry Point: 00aed310
// Size: 9688 bytes
// Signature: undefined __thiscall Write(SpvReflectToYaml * this, basic_ostream * param_1)


/* WARNING: Type propagation algorithm not settling */
/* SpvReflectToYaml::Write(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall SpvReflectToYaml::Write(SpvReflectToYaml *this,basic_ostream *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  SpvReflectToYaml *pSVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  SpvReflectToYaml **ppSVar14;
  char *pcVar15;
  long lVar16;
  SpvReflectToYaml **ppSVar17;
  ulong uVar18;
  SpvReflectToYaml **ppSVar19;
  SpvReflectToYaml **ppSVar20;
  ulong uVar21;
  SpvReflectToYaml **ppSVar22;
  uint *puVar23;
  SpvReflectToYaml **ppSVar24;
  id local_108;
  undefined2 local_107;
  undefined uStack_105;
  undefined uStack_104;
  undefined uStack_103;
  undefined uStack_102;
  undefined uStack_101;
  undefined uStack_100;
  undefined uStack_ff;
  undefined2 uStack_fe;
  undefined uStack_fc;
  undefined local_fb;
  void *local_f8;
  id local_f0;
  undefined4 local_ef;
  undefined uStack_eb;
  undefined uStack_ea;
  undefined uStack_e9;
  undefined uStack_e8;
  undefined uStack_e7;
  undefined uStack_e6;
  uint uStack_e5;
  undefined uStack_e1;
  char *local_e0;
  byte local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined local_d1;
  ulong local_d0;
  char *local_c8;
  byte local_c0;
  undefined4 local_bf;
  undefined local_bb;
  ulong local_b8;
  char *local_b0;
  byte local_a8;
  undefined2 local_a7;
  undefined local_a5;
  ulong local_a0;
  char *local_98;
  ushort local_90 [4];
  ulong local_88;
  char *local_80;
  id aiStack_78 [8];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(long *)(*(long *)this + 0x498) == 0) goto LAB_00aef880;
  local_90[0] = 0;
  local_a8 = 4;
  local_a7 = 0x2020;
  local_a5 = 0;
  local_c0 = 8;
  local_bf = 0x20202020;
  local_bb = 0;
  local_d8 = 0xc;
  local_d7 = 0x20202020;
  local_d3 = 0x2020;
  local_d1 = 0;
                    /* try { // try from 00aed394 to 00aed3bf has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"%YAML 1.0",9);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed3c0 to 00aed3df has its CatchHandler @ 00aef978 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed3ec to 00aed42b has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"---",3);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed42c to 00aed44b has its CatchHandler @ 00aef974 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed458 to 00aed4df has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar15 = (char *)((ulong)local_90 | 1);
  ppSVar22 = (SpvReflectToYaml **)(this + 0x18);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectTypeDescription_const*,std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::less<SpvReflectTypeDescription_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectTypeDescription_const*,std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::less<SpvReflectTypeDescription_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>>>
             *)(this + 0x10),(__tree_node *)*ppSVar22);
  *(SpvReflectToYaml ***)(this + 0x10) = ppSVar22;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (*(uint *)(this + 8) < 2) {
    if (*(uint *)(this + 8) == 1) {
      uVar18 = (ulong)((byte)local_90[0] >> 1);
      pcVar13 = pcVar15;
      if ((local_90[0] & 1) != 0) {
        uVar18 = local_88;
        pcVar13 = local_80;
      }
                    /* try { // try from 00aed590 to 00aed5bf has its CatchHandler @ 00aefa48 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar13,uVar18);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"all_type_descriptions:",0x16);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed5c0 to 00aed5df has its CatchHandler @ 00aef8e8 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed5ec to 00aed5ff has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      lVar9 = *(long *)this;
      if (*(int *)(lVar9 + 0x40) != 0) {
        lVar16 = 0;
        uVar18 = 0;
        do {
                    /* try { // try from 00aed61c to 00aed62b has its CatchHandler @ 00aef9b0 */
          WriteDescriptorBindingTypes
                    (this,param_1,(SpvReflectDescriptorBinding *)(*(long *)(lVar9 + 0x48) + lVar16),
                     1);
          lVar9 = *(long *)this;
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x248;
        } while (uVar18 < *(uint *)(lVar9 + 0x40));
      }
      if (*(int *)(lVar9 + 0x488) != 0) {
        lVar16 = 0;
        uVar18 = 0;
        do {
                    /* try { // try from 00aed65c to 00aed66b has its CatchHandler @ 00aef9ac */
          WriteBlockVariableTypes
                    (this,param_1,(SpvReflectBlockVariable *)(*(long *)(lVar9 + 0x490) + lVar16),1);
          lVar9 = *(long *)this;
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x160;
        } while (uVar18 < *(uint *)(lVar9 + 0x488));
      }
      if (*(int *)(lVar9 + 0x458) != 0) {
        uVar18 = 0;
        do {
                    /* try { // try from 00aed698 to 00aed6a7 has its CatchHandler @ 00aef9a8 */
          WriteInterfaceVariableTypes
                    (this,param_1,
                     *(SpvReflectInterfaceVariable **)(*(long *)(lVar9 + 0x460) + uVar18 * 8),1);
          lVar9 = *(long *)this;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(lVar9 + 0x458));
      }
      if (*(int *)(lVar9 + 0x468) != 0) {
        uVar18 = 0;
        do {
                    /* try { // try from 00aed6d0 to 00aed6df has its CatchHandler @ 00aef9a4 */
          WriteInterfaceVariableTypes
                    (this,param_1,
                     *(SpvReflectInterfaceVariable **)(*(long *)(lVar9 + 0x470) + uVar18 * 8),1);
          lVar9 = *(long *)this;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(lVar9 + 0x468));
      }
    }
  }
  else {
    uVar18 = (ulong)((byte)local_90[0] >> 1);
    pcVar13 = pcVar15;
    if ((local_90[0] & 1) != 0) {
      uVar18 = local_88;
      pcVar13 = local_80;
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar13,uVar18);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"all_type_descriptions:",0x16);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed4e0 to 00aed4ff has its CatchHandler @ 00aef914 */
    plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed50c to 00aed51f has its CatchHandler @ 00aefa48 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    lVar9 = *(long *)(*(long *)this + 0x498);
    if (*(long *)(lVar9 + 0x20) != 0) {
      lVar16 = 0;
      uVar18 = 0;
      do {
                    /* try { // try from 00aed540 to 00aed54f has its CatchHandler @ 00aef9bc */
        WriteTypeDescription
                  (this,param_1,(SpvReflectTypeDescription *)(*(long *)(lVar9 + 0x28) + lVar16),1);
        uVar18 = uVar18 + 1;
        lVar16 = lVar16 + 0x168;
        lVar9 = *(long *)(*(long *)this + 0x498);
      } while (uVar18 < *(ulong *)(lVar9 + 0x20));
    }
  }
  ppSVar24 = (SpvReflectToYaml **)(this + 0x30);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectBlockVariable_const*,std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>,std::__ndk1::less<SpvReflectBlockVariable_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectBlockVariable_const*,std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>,std::__ndk1::less<SpvReflectBlockVariable_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectBlockVariable_const*,unsigned_int>>>
             *)(this + 0x28),(__tree_node *)*ppSVar24);
  *(SpvReflectToYaml ***)(this + 0x28) = ppSVar24;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  uVar18 = (ulong)((byte)local_90[0] >> 1);
  pcVar13 = pcVar15;
  if ((local_90[0] & 1) != 0) {
    uVar18 = local_88;
    pcVar13 = local_80;
  }
                    /* try { // try from 00aed724 to 00aed753 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"all_block_variables:",0x14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed754 to 00aed773 has its CatchHandler @ 00aef970 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed780 to 00aed793 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x40) != 0) {
    uVar18 = 0;
    lVar16 = 0x40;
    do {
                    /* try { // try from 00aed7b0 to 00aed7bf has its CatchHandler @ 00aef9f8 */
      WriteBlockVariable(this,param_1,(SpvReflectBlockVariable *)(*(long *)(lVar9 + 0x48) + lVar16),
                         1);
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x248;
    } while (uVar18 < *(uint *)(lVar9 + 0x40));
  }
  if (*(int *)(lVar9 + 0x488) != 0) {
    lVar16 = 0;
    uVar18 = 0;
    do {
                    /* try { // try from 00aed7f0 to 00aed7ff has its CatchHandler @ 00aef9f4 */
      WriteBlockVariable(this,param_1,(SpvReflectBlockVariable *)(*(long *)(lVar9 + 0x490) + lVar16)
                         ,1);
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x160;
    } while (uVar18 < *(uint *)(lVar9 + 0x488));
  }
  ppSVar17 = (SpvReflectToYaml **)(this + 0x48);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectDescriptorBinding_const*,std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>,std::__ndk1::less<SpvReflectDescriptorBinding_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectDescriptorBinding_const*,std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>,std::__ndk1::less<SpvReflectDescriptorBinding_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectDescriptorBinding_const*,unsigned_int>>>
             *)(this + 0x40),(__tree_node *)*ppSVar17);
  *(SpvReflectToYaml ***)(this + 0x40) = ppSVar17;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  uVar18 = (ulong)((byte)local_90[0] >> 1);
  pcVar13 = pcVar15;
  if ((local_90[0] & 1) != 0) {
    uVar18 = local_88;
    pcVar13 = local_80;
  }
                    /* try { // try from 00aed848 to 00aed877 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"all_descriptor_bindings:",0x18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed878 to 00aed897 has its CatchHandler @ 00aef96c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed8a4 to 00aed8b7 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x40) != 0) {
    lVar16 = 0;
    uVar18 = 0;
    do {
                    /* try { // try from 00aed8d4 to 00aed8e3 has its CatchHandler @ 00aef9f0 */
      WriteDescriptorBinding
                (this,param_1,(SpvReflectDescriptorBinding *)(*(long *)(lVar9 + 0x48) + lVar16),1);
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x248;
    } while (uVar18 < *(uint *)(lVar9 + 0x40));
  }
  ppSVar19 = (SpvReflectToYaml **)(this + 0x60);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectInterfaceVariable_const*,std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>,std::__ndk1::less<SpvReflectInterfaceVariable_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectInterfaceVariable_const*,std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>,std::__ndk1::less<SpvReflectInterfaceVariable_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectInterfaceVariable_const*,unsigned_int>>>
             *)(this + 0x58),(__tree_node *)*ppSVar19);
  *(SpvReflectToYaml ***)(this + 0x58) = ppSVar19;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  uVar18 = (ulong)((byte)local_90[0] >> 1);
  pcVar13 = pcVar15;
  if ((local_90[0] & 1) != 0) {
    uVar18 = local_88;
    pcVar13 = local_80;
  }
                    /* try { // try from 00aed930 to 00aed95f has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"all_interface_variables:",0x18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aed960 to 00aed97f has its CatchHandler @ 00aef968 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aed98c to 00aed99f has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x458) != 0) {
    uVar18 = 0;
    do {
                    /* try { // try from 00aed9b8 to 00aed9c7 has its CatchHandler @ 00aef9ec */
      WriteInterfaceVariable
                (this,param_1,
                 *(SpvReflectInterfaceVariable **)(*(long *)(lVar9 + 0x460) + uVar18 * 8),1);
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x458));
  }
  if (*(int *)(lVar9 + 0x468) != 0) {
    uVar18 = 0;
    do {
                    /* try { // try from 00aed9f0 to 00aed9ff has its CatchHandler @ 00aef9e8 */
      WriteInterfaceVariable
                (this,param_1,
                 *(SpvReflectInterfaceVariable **)(*(long *)(lVar9 + 0x470) + uVar18 * 8),1);
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x468));
  }
  uVar18 = (ulong)((byte)local_90[0] >> 1);
  if ((local_90[0] & 1) != 0) {
    uVar18 = local_88;
    pcVar15 = local_80;
  }
                    /* try { // try from 00aeda2c to 00aeda5b has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar15,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"module:",7);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeda5c to 00aeda7b has its CatchHandler @ 00aef964 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aeda88 to 00aedaf3 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar15 = (char *)((ulong)&local_a8 | 1);
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"generator: ",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,**(int **)this);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aedb00 to 00aedb0b has its CatchHandler @ 00aef910 */
  ToStringGenerator(**(SpvReflectGenerator **)this);
  uVar18 = (ulong)((byte)local_f0 >> 1);
  pcVar13 = (char *)((ulong)&local_f0 | 1);
  if (((byte)local_f0 & 1) != 0) {
    uVar18 = CONCAT17(uStack_e1,
                      CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
    pcVar13 = local_e0;
  }
                    /* try { // try from 00aedb28 to 00aedb47 has its CatchHandler @ 00aef9a0 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar13,uVar18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aedb48 to 00aedb67 has its CatchHandler @ 00aef960 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aedb74 to 00aedb87 has its CatchHandler @ 00aef9a0 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
                    /* try { // try from 00aedbb4 to 00aedbcb has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pcVar13 = "entry_point_name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"entry_point_name: ",0x12);
                    /* try { // try from 00aedbd8 to 00aedbe3 has its CatchHandler @ 00aef90c */
  SafeString(*(SpvReflectToYaml **)(*(long *)this + 8),pcVar13);
  uVar18 = (ulong)((byte)local_f0 >> 1);
  pcVar13 = (char *)((ulong)&local_f0 | 1);
  if (((byte)local_f0 & 1) != 0) {
    uVar18 = CONCAT17(uStack_e1,
                      CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
    pcVar13 = local_e0;
  }
                    /* try { // try from 00aedc00 to 00aedc1f has its CatchHandler @ 00aef99c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar13,uVar18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aedc20 to 00aedc3f has its CatchHandler @ 00aef95c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aedc4c to 00aedc5f has its CatchHandler @ 00aef99c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
                    /* try { // try from 00aedc8c to 00aedcc7 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"entry_point_id: ",0x10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(*(long *)this + 0x10));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aedcc8 to 00aedce7 has its CatchHandler @ 00aef958 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aedcf4 to 00aedd57 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"source_language: ",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(*(long *)this + 0x20));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
  switch(*(undefined4 *)(*(long *)this + 0x20)) {
  case 0:
    uVar18 = 7;
    uStack_e8 = 0;
    local_f0 = (id)0xe;
    local_ef = 0x6e6b6e55;
    uStack_eb = 0x6f;
    uStack_ea = 0x77;
    uStack_e9 = 0x6e;
    break;
  case 1:
    local_ef = 0x4c535345;
    goto LAB_00aede50;
  case 2:
    local_ef = 0x4c534c47;
    goto LAB_00aede50;
  case 3:
    uVar18 = 8;
    uStack_e7 = 0;
    local_f0 = (id)0x10;
    local_ef = 0x6e65704f;
    uStack_eb = 0x43;
    uStack_ea = 0x4c;
    uStack_e9 = 0x5f;
    uStack_e8 = 0x43;
    break;
  case 4:
    uVar18 = 10;
    uStack_e5 = uStack_e5 & 0xffffff00;
    local_f0 = (id)0x14;
    uStack_e7 = 0x50;
    uStack_e6 = 0x50;
    local_ef = 0x6e65704f;
    uStack_eb = 0x43;
    uStack_ea = 0x4c;
    uStack_e9 = 0x5f;
    uStack_e8 = 0x43;
    break;
  case 5:
    local_ef = 0x4c534c48;
LAB_00aede50:
    uVar18 = 4;
    local_f0 = (id)0x8;
    uStack_eb = 0;
    break;
  case 6:
    uVar18 = 0xe;
    uStack_e1 = 0;
    local_f0 = (id)0x1c;
    local_ef = 0x5f505043;
    uStack_eb = 0x66;
    uStack_ea = 0x6f;
    uStack_e9 = 0x72;
    uStack_e8 = 0x5f;
    uStack_e7 = 0x4f;
    uStack_e6 = 0x70;
    uStack_e5 = 0x4c436e65;
    break;
  default:
    uVar18 = 3;
    local_f0 = (id)0x6;
    local_ef = 0x3f3f3f;
  }
                    /* try { // try from 00aede94 to 00aedeaf has its CatchHandler @ 00aef998 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,(char *)((ulong)&local_f0 | 1),uVar18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aedeb0 to 00aedecf has its CatchHandler @ 00aef954 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aededc to 00aedeef has its CatchHandler @ 00aef998 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
                    /* try { // try from 00aedf1c to 00aedf57 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"source_language_version: ",0x19);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(*(long *)this + 0x24));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aedf58 to 00aedf77 has its CatchHandler @ 00aef950 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aedf84 to 00aedfe7 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"spirv_execution_model: ",0x17);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(*(long *)this + 0x38));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aedff4 to 00aedfff has its CatchHandler @ 00aef908 */
  ToStringSpvExecutionModel(*(SpvExecutionModel_ *)(*(long *)this + 0x38));
  uVar18 = (ulong)((byte)local_f0 >> 1);
  pcVar13 = (char *)((ulong)&local_f0 | 1);
  if (((byte)local_f0 & 1) != 0) {
    uVar18 = CONCAT17(uStack_e1,
                      CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
    pcVar13 = local_e0;
  }
                    /* try { // try from 00aee01c to 00aee03b has its CatchHandler @ 00aef994 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar13,uVar18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee03c to 00aee05b has its CatchHandler @ 00aef94c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aee068 to 00aee07b has its CatchHandler @ 00aef994 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
                    /* try { // try from 00aee0a8 to 00aee0bf has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"shader_stage: ",0xe);
                    /* try { // try from 00aee0cc to 00aee0d7 has its CatchHandler @ 00aef904 */
  FUN_00ae9274(&local_f0,*(undefined4 *)(*(long *)this + 0x3c));
  uVar18 = (ulong)((byte)local_f0 >> 1);
  pcVar13 = (char *)((ulong)&local_f0 | 1);
  if (((byte)local_f0 & 1) != 0) {
    uVar18 = CONCAT17(uStack_e1,
                      CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
    pcVar13 = local_e0;
  }
                    /* try { // try from 00aee0f4 to 00aee10b has its CatchHandler @ 00aef948 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
  iVar2 = *(int *)(*(long *)this + 0x3c);
  if (iVar2 < 0x80) {
    switch(iVar2) {
    case 1:
      local_107 = 0x5356;
      break;
    case 2:
      local_107 = 0x5348;
      break;
    default:
      goto switchD_00aee13c_caseD_3;
    case 4:
      local_107 = 0x5344;
      break;
    case 8:
      local_107 = 0x5347;
      break;
    case 0x10:
      local_107 = 0x5350;
      break;
    case 0x20:
      local_107 = 0x5343;
      break;
    case 0x40:
      uVar12 = 0x4b534154;
LAB_00aee2c0:
      uVar18 = 4;
      local_108 = (id)0x8;
      local_107 = (undefined2)uVar12;
      uStack_105 = (undefined)((uint)uVar12 >> 0x10);
      uStack_104 = (undefined)((uint)uVar12 >> 0x18);
      uStack_103 = 0;
      goto LAB_00aee314;
    }
    uVar18 = 2;
    local_108 = (id)0x4;
    uStack_105 = 0;
  }
  else if (iVar2 < 0x400) {
    if (iVar2 == 0x80) {
      uVar12 = 0x4853454d;
      goto LAB_00aee2c0;
    }
    if (iVar2 == 0x100) {
      uVar18 = 6;
      uStack_101 = 0;
      local_108 = (id)0xc;
      local_107 = 0x4152;
      uStack_105 = 0x59;
      uStack_104 = 0x47;
      uStack_103 = 0x45;
      uStack_102 = 0x4e;
    }
    else {
      if (iVar2 != 0x200) goto switchD_00aee13c_caseD_3;
      uVar18 = 7;
      uStack_100 = 0;
      local_108 = (id)0xe;
      local_107 = 0x4e41;
      uStack_105 = 0x59;
      uStack_104 = 0x5f;
      uStack_103 = 0x48;
      uStack_102 = 0x49;
      uStack_101 = 0x54;
    }
  }
  else if (iVar2 < 0x1000) {
    if (iVar2 == 0x400) {
      uVar18 = 0xb;
      uStack_fc = 0;
      local_108 = (id)0x16;
      uStack_ff = 0x48;
      uStack_fe = 0x5449;
      local_107 = 0x4c43;
      uStack_105 = 0x4f;
      uStack_104 = 0x53;
      uStack_103 = 0x45;
      uStack_102 = 0x53;
      uStack_101 = 0x54;
      uStack_100 = 0x5f;
    }
    else {
      if (iVar2 == 0x800) {
        uVar12 = 0x5353494d;
        goto LAB_00aee2c0;
      }
switchD_00aee13c_caseD_3:
      uVar18 = 3;
      local_108 = (id)0x6;
      local_107 = 0x3f3f;
      uStack_105 = 0x3f;
      uStack_104 = 0;
    }
  }
  else if (iVar2 == 0x1000) {
    uVar18 = 0xc;
    local_fb = 0;
    local_108 = (id)0x18;
    uStack_ff = 0x54;
    uStack_fe = 0x4f49;
    uStack_fc = 0x4e;
    local_107 = 0x4e49;
    uStack_105 = 0x54;
    uStack_104 = 0x45;
    uStack_103 = 0x52;
    uStack_102 = 0x53;
    uStack_101 = 0x45;
    uStack_100 = 0x43;
  }
  else {
    if (iVar2 != 0x2000) goto switchD_00aee13c_caseD_3;
    uVar18 = 8;
    uStack_ff = 0;
    local_108 = (id)0x10;
    local_107 = 0x4143;
    uStack_105 = 0x4c;
    uStack_104 = 0x4c;
    uStack_103 = 0x41;
    uStack_102 = 0x42;
    uStack_101 = 0x4c;
    uStack_100 = 0x45;
  }
LAB_00aee314:
                    /* try { // try from 00aee31c to 00aee337 has its CatchHandler @ 00aef97c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,(char *)((ulong)&local_108 | 1),uVar18);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee338 to 00aee357 has its CatchHandler @ 00aef938 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00aee364 to 00aee377 has its CatchHandler @ 00aef97c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
                    /* try { // try from 00aee3b4 to 00aee3ef has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"descriptor_binding_count: ",0x1a);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(*(long *)this + 0x40));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee3f0 to 00aee40f has its CatchHandler @ 00aef934 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee41c to 00aee47b has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar13 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar13 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar13,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"descriptor_bindings:",0x14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee47c to 00aee49b has its CatchHandler @ 00aef930 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee4a8 to 00aee4bb has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  pcVar13 = (char *)((ulong)&local_c0 | 1);
  if (*(int *)(lVar9 + 0x40) != 0) {
    uVar18 = 0;
    do {
      ppSVar14 = (SpvReflectToYaml **)*ppSVar17;
      if (ppSVar14 == (SpvReflectToYaml **)0x0) {
LAB_00aee55c:
        ppSVar20 = ppSVar17;
      }
      else {
        pSVar10 = (SpvReflectToYaml *)(*(long *)(lVar9 + 0x48) + uVar18 * 0x248);
        ppSVar20 = ppSVar17;
        do {
          if (ppSVar14[4] >= pSVar10) {
            ppSVar20 = ppSVar14;
          }
          ppSVar14 = (SpvReflectToYaml **)ppSVar14[ppSVar14[4] < pSVar10];
        } while (ppSVar14 != (SpvReflectToYaml **)0x0);
        if ((ppSVar20 == ppSVar17) || (pSVar10 < ppSVar20[4])) goto LAB_00aee55c;
      }
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar11 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar11 = local_b0;
      }
                    /* try { // try from 00aee57c to 00aee5a3 has its CatchHandler @ 00aefa44 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar11,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *db",5);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(ppSVar20 + 5));
      pcVar11 = " # ";
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," # ",3);
                    /* try { // try from 00aee5bc to 00aee5c3 has its CatchHandler @ 00aef9e4 */
      SafeString(*(SpvReflectToYaml **)(*(long *)(*(long *)this + 0x48) + uVar18 * 0x248 + 8),
                 pcVar11);
      uVar21 = (ulong)((byte)local_f0 >> 1);
      pcVar11 = (char *)((ulong)&local_f0 | 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar21 = CONCAT17(uStack_e1,
                          CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
        pcVar11 = local_e0;
      }
                    /* try { // try from 00aee5dc to 00aee5fb has its CatchHandler @ 00aefa40 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar11,uVar21);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee5fc to 00aee617 has its CatchHandler @ 00aefa24 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aee624 to 00aee637 has its CatchHandler @ 00aefa40 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x40));
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar11 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar11 = local_98;
  }
                    /* try { // try from 00aee66c to 00aee6ab has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar11,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"descriptor_set_count: ",0x16);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(*(long *)this + 0x50));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee6ac to 00aee6cb has its CatchHandler @ 00aef92c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee6d8 to 00aee737 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar11 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar11 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar11,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"descriptor_sets:",0x10);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee738 to 00aee757 has its CatchHandler @ 00aef928 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee764 to 00aee777 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  pcVar11 = (char *)((ulong)&local_d8 | 1);
  if (*(int *)(lVar9 + 0x50) != 0) {
    uVar18 = 0;
    do {
      uVar21 = (ulong)(local_a8 >> 1);
      pcVar8 = pcVar15;
      if ((local_a8 & 1) != 0) {
        uVar21 = local_a0;
        pcVar8 = local_98;
      }
                    /* try { // try from 00aee7e4 to 00aee82f has its CatchHandler @ 00aefa4c */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- ",2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"set: ",5);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(lVar9 + uVar18 * 0x10 + 0x58));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee830 to 00aee84b has its CatchHandler @ 00aefa08 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee858 to 00aee8c3 has its CatchHandler @ 00aefa4c */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar8 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar8 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"binding_count: ",0xf);
      puVar23 = (uint *)(lVar9 + uVar18 * 0x10 + 0x5c);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*puVar23);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee8c4 to 00aee8df has its CatchHandler @ 00aefa04 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee8ec to 00aee94b has its CatchHandler @ 00aefa4c */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar8 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar8 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"bindings:",9);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aee94c to 00aee967 has its CatchHandler @ 00aefa00 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aee974 to 00aee987 has its CatchHandler @ 00aefa4c */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (*puVar23 != 0) {
        uVar21 = 0;
        plVar6 = (long *)(lVar9 + uVar18 * 0x10 + 0x60);
        do {
          ppSVar14 = (SpvReflectToYaml **)*ppSVar17;
          if (ppSVar14 == (SpvReflectToYaml **)0x0) {
LAB_00aee9f8:
            ppSVar20 = ppSVar17;
          }
          else {
            pSVar10 = *(SpvReflectToYaml **)(*plVar6 + uVar21 * 8);
            ppSVar20 = ppSVar17;
            do {
              if (ppSVar14[4] >= pSVar10) {
                ppSVar20 = ppSVar14;
              }
              ppSVar14 = (SpvReflectToYaml **)ppSVar14[ppSVar14[4] < pSVar10];
            } while (ppSVar14 != (SpvReflectToYaml **)0x0);
            if ((ppSVar20 == ppSVar17) || (pSVar10 < ppSVar20[4])) goto LAB_00aee9f8;
          }
          uVar1 = (ulong)(local_d8 >> 1);
          pcVar8 = pcVar11;
          if ((local_d8 & 1) != 0) {
            uVar1 = local_d0;
            pcVar8 = local_c8;
          }
                    /* try { // try from 00aeea18 to 00aeea43 has its CatchHandler @ 00aefa7c */
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar8,uVar1);
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar5,"- *db",5);
          pbVar5 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                              *(uint *)(ppSVar20 + 5));
          pcVar8 = " # ";
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar5," # ",3);
                    /* try { // try from 00aeea54 to 00aeea5b has its CatchHandler @ 00aefa50 */
          SafeString(*(SpvReflectToYaml **)(*(long *)(*plVar6 + uVar21 * 8) + 8),pcVar8);
          uVar1 = (ulong)((byte)local_f0 >> 1);
          pcVar8 = (char *)((ulong)&local_f0 | 1);
          if (((byte)local_f0 & 1) != 0) {
            uVar1 = CONCAT17(uStack_e1,
                             CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
            pcVar8 = local_e0;
          }
                    /* try { // try from 00aeea74 to 00aeea93 has its CatchHandler @ 00aefa64 */
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar5,pcVar8,uVar1);
          std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeea94 to 00aeeaaf has its CatchHandler @ 00aefa54 */
          plVar7 = (long *)std::__ndk1::locale::use_facet(&local_108);
          (**(code **)(*plVar7 + 0x38))(plVar7,10);
          std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aeeabc to 00aeeacf has its CatchHandler @ 00aefa64 */
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
          if (((byte)local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *puVar23);
      }
      uVar18 = uVar18 + 1;
      lVar9 = *(long *)this;
    } while (uVar18 < *(uint *)(lVar9 + 0x50));
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
                    /* try { // try from 00aeeb00 to 00aeeb83 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"input_variable_count: ",0x16);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(*(long *)this + 0x458));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",\n",2);
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"input_variables:",0x10);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeeb84 to 00aeeba3 has its CatchHandler @ 00aef924 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aeebb0 to 00aeebc3 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x458) != 0) {
    uVar18 = 0;
    do {
      ppSVar17 = (SpvReflectToYaml **)*ppSVar19;
      if (ppSVar17 == (SpvReflectToYaml **)0x0) {
LAB_00aeec50:
        ppSVar14 = ppSVar19;
      }
      else {
        pSVar10 = *(SpvReflectToYaml **)(*(long *)(lVar9 + 0x460) + uVar18 * 8);
        ppSVar14 = ppSVar19;
        do {
          if (ppSVar17[4] >= pSVar10) {
            ppSVar14 = ppSVar17;
          }
          ppSVar17 = (SpvReflectToYaml **)ppSVar17[ppSVar17[4] < pSVar10];
        } while (ppSVar17 != (SpvReflectToYaml **)0x0);
        if ((ppSVar14 == ppSVar19) || (pSVar10 < ppSVar14[4])) goto LAB_00aeec50;
      }
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar8 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar8 = local_b0;
      }
                    /* try { // try from 00aeec70 to 00aeec97 has its CatchHandler @ 00aefa3c */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *iv",5);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(ppSVar14 + 5));
      pcVar8 = " # ";
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," # ",3);
                    /* try { // try from 00aeecac to 00aeecb3 has its CatchHandler @ 00aef9e0 */
      SafeString(*(SpvReflectToYaml **)
                  (*(long *)(*(long *)(*(long *)this + 0x460) + uVar18 * 8) + 8),pcVar8);
      uVar21 = (ulong)((byte)local_f0 >> 1);
      pcVar8 = (char *)((ulong)&local_f0 | 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar21 = CONCAT17(uStack_e1,
                          CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
        pcVar8 = local_e0;
      }
                    /* try { // try from 00aeeccc to 00aeeceb has its CatchHandler @ 00aefa38 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar8,uVar21);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeecec to 00aeed07 has its CatchHandler @ 00aefa20 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aeed14 to 00aeed27 has its CatchHandler @ 00aefa38 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x458));
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
                    /* try { // try from 00aeed5c to 00aeeddb has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"output_variable_count: ",0x17);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(*(long *)this + 0x468));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",\n",2);
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"output_variables:",0x11);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeeddc to 00aeedfb has its CatchHandler @ 00aef920 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aeee08 to 00aeee1b has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x468) != 0) {
    uVar18 = 0;
    do {
      ppSVar17 = (SpvReflectToYaml **)*ppSVar19;
      if (ppSVar17 == (SpvReflectToYaml **)0x0) {
LAB_00aeeea8:
        ppSVar14 = ppSVar19;
      }
      else {
        pSVar10 = *(SpvReflectToYaml **)(*(long *)(lVar9 + 0x470) + uVar18 * 8);
        ppSVar14 = ppSVar19;
        do {
          if (ppSVar17[4] >= pSVar10) {
            ppSVar14 = ppSVar17;
          }
          ppSVar17 = (SpvReflectToYaml **)ppSVar17[ppSVar17[4] < pSVar10];
        } while (ppSVar17 != (SpvReflectToYaml **)0x0);
        if ((ppSVar14 == ppSVar19) || (pSVar10 < ppSVar14[4])) goto LAB_00aeeea8;
      }
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar8 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar8 = local_b0;
      }
                    /* try { // try from 00aeeec8 to 00aeeeef has its CatchHandler @ 00aefa34 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *iv",5);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(ppSVar14 + 5));
      pcVar8 = " # ";
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," # ",3);
                    /* try { // try from 00aeef04 to 00aeef0b has its CatchHandler @ 00aef9dc */
      SafeString(*(SpvReflectToYaml **)
                  (*(long *)(*(long *)(*(long *)this + 0x470) + uVar18 * 8) + 8),pcVar8);
      uVar21 = (ulong)((byte)local_f0 >> 1);
      pcVar8 = (char *)((ulong)&local_f0 | 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar21 = CONCAT17(uStack_e1,
                          CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
        pcVar8 = local_e0;
      }
                    /* try { // try from 00aeef24 to 00aeef43 has its CatchHandler @ 00aefa30 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar8,uVar21);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aeef44 to 00aeef5f has its CatchHandler @ 00aefa1c */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aeef6c to 00aeef7f has its CatchHandler @ 00aefa30 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x468));
  }
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
                    /* try { // try from 00aeefb4 to 00aef033 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"push_constant_count: ",0x15);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(*(long *)this + 0x488));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",\n",2);
  uVar18 = (ulong)(local_a8 >> 1);
  pcVar8 = pcVar15;
  if ((local_a8 & 1) != 0) {
    uVar18 = local_a0;
    pcVar8 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar8,uVar18);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"push_constants:",0xf);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef034 to 00aef053 has its CatchHandler @ 00aef91c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef060 to 00aef073 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  lVar9 = *(long *)this;
  if (*(int *)(lVar9 + 0x488) != 0) {
    uVar18 = 0;
    do {
      ppSVar17 = (SpvReflectToYaml **)*ppSVar24;
      if (ppSVar17 == (SpvReflectToYaml **)0x0) {
LAB_00aef108:
        ppSVar19 = ppSVar24;
      }
      else {
        pSVar10 = (SpvReflectToYaml *)(*(long *)(lVar9 + 0x490) + uVar18 * 0x160);
        ppSVar19 = ppSVar24;
        do {
          if (ppSVar17[4] >= pSVar10) {
            ppSVar19 = ppSVar17;
          }
          ppSVar17 = (SpvReflectToYaml **)ppSVar17[ppSVar17[4] < pSVar10];
        } while (ppSVar17 != (SpvReflectToYaml **)0x0);
        if ((ppSVar19 == ppSVar24) || (pSVar10 < ppSVar19[4])) goto LAB_00aef108;
      }
      uVar21 = (ulong)(local_c0 >> 1);
      pcVar8 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar21 = local_b8;
        pcVar8 = local_b0;
      }
                    /* try { // try from 00aef128 to 00aef14f has its CatchHandler @ 00aefa2c */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar8,uVar21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *bv",5);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(ppSVar19 + 5));
      pcVar8 = " # ";
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," # ",3);
                    /* try { // try from 00aef168 to 00aef16f has its CatchHandler @ 00aef9d8 */
      SafeString(*(SpvReflectToYaml **)(*(long *)(*(long *)this + 0x490) + uVar18 * 0x160 + 8),
                 pcVar8);
      uVar21 = (ulong)((byte)local_f0 >> 1);
      pcVar8 = (char *)((ulong)&local_f0 | 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar21 = CONCAT17(uStack_e1,
                          CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))));
        pcVar8 = local_e0;
      }
                    /* try { // try from 00aef188 to 00aef1a7 has its CatchHandler @ 00aefa28 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar8,uVar21);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef1a8 to 00aef1c3 has its CatchHandler @ 00aefa18 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00aef1d0 to 00aef1e3 has its CatchHandler @ 00aefa28 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      lVar9 = *(long *)this;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(lVar9 + 0x488));
  }
  if (1 < *(uint *)(this + 8)) {
    uVar18 = (ulong)(local_a8 >> 1);
    if ((local_a8 & 1) != 0) {
      uVar18 = local_a0;
      pcVar15 = local_98;
    }
                    /* try { // try from 00aef228 to 00aef257 has its CatchHandler @ 00aefa48 */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar15,uVar18);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"_internal:",10);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef258 to 00aef277 has its CatchHandler @ 00aef900 */
    plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef284 to 00aef2ff has its CatchHandler @ 00aefa48 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (*(long *)(*(long *)this + 0x498) != 0) {
      uVar18 = (ulong)(local_c0 >> 1);
      pcVar15 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar18 = local_b8;
        pcVar15 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar15,uVar18);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"spirv_size: ",0xc);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(ulong *)(*(long *)(*(long *)this + 0x498) + 8));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef300 to 00aef31f has its CatchHandler @ 00aef8fc */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef32c to 00aef373 has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar18 = (ulong)(local_c0 >> 1);
      pcVar15 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar18 = local_b8;
        pcVar15 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar15,uVar18);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,"spirv_code: [",0xd);
      lVar9 = *(long *)this;
      if (*(int *)(*(long *)(lVar9 + 0x498) + 0x18) != 0) {
        uVar18 = 0;
        do {
          if ((uVar18 / 6) * 6 - uVar18 == 0) {
                    /* try { // try from 00aef3e8 to 00aef3ef has its CatchHandler @ 00aef9d4 */
            std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef3f0 to 00aef40b has its CatchHandler @ 00aef9b8 */
            plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
            (**(code **)(*plVar6 + 0x38))(plVar6,10);
            std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef418 to 00aef44f has its CatchHandler @ 00aef9d4 */
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)param_1);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
            uVar21 = (ulong)(local_d8 >> 1);
            pcVar15 = pcVar11;
            if ((local_d8 & 1) != 0) {
              uVar21 = local_d0;
              pcVar15 = local_c8;
            }
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,pcVar15,uVar21);
            lVar9 = *(long *)this;
          }
                    /* try { // try from 00aef460 to 00aef467 has its CatchHandler @ 00aef9b4 */
          FUN_00ae9274(&local_f0,
                       *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0x498) + 0x10) + uVar18 * 4));
          uVar21 = (ulong)((byte)local_f0 >> 1);
          pcVar15 = (char *)((ulong)&local_f0 | 1);
          if (((byte)local_f0 & 1) != 0) {
            uVar21 = CONCAT17(uStack_e1,
                              CONCAT43(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,uStack_e8))))
            ;
            pcVar15 = local_e0;
          }
                    /* try { // try from 00aef480 to 00aef493 has its CatchHandler @ 00aef9c4 */
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar15,uVar21);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",",1);
          if (((byte)local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          lVar9 = *(long *)this;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(*(long *)(lVar9 + 0x498) + 0x18));
      }
                    /* try { // try from 00aef4a8 to 00aef4d3 has its CatchHandler @ 00aefa48 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"]",1);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef4d4 to 00aef4f3 has its CatchHandler @ 00aef8f8 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef500 to 00aef56f has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar18 = (ulong)(local_c0 >> 1);
      pcVar15 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar18 = local_b8;
        pcVar15 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar15,uVar18);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"spirv_word_count: ",0x12);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(*(long *)(*(long *)this + 0x498) + 0x18));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef570 to 00aef58f has its CatchHandler @ 00aef8f4 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef59c to 00aef60b has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar18 = (ulong)(local_c0 >> 1);
      pcVar15 = pcVar13;
      if ((local_c0 & 1) != 0) {
        uVar18 = local_b8;
        pcVar15 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar15,uVar18);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"type_description_count: ",0x18);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(ulong *)(*(long *)(*(long *)this + 0x498) + 0x20));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef60c to 00aef62b has its CatchHandler @ 00aef8f0 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef638 to 00aef697 has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar18 = (ulong)(local_c0 >> 1);
      if ((local_c0 & 1) != 0) {
        uVar18 = local_b8;
        pcVar13 = local_b0;
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar13,uVar18);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"type_descriptions:",0x12);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef698 to 00aef6b7 has its CatchHandler @ 00aef8ec */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef6c4 to 00aef6d7 has its CatchHandler @ 00aefa48 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      lVar9 = *(long *)(*(long *)this + 0x498);
      if (*(long *)(lVar9 + 0x20) != 0) {
        uVar18 = 0;
        do {
          ppSVar24 = (SpvReflectToYaml **)*ppSVar22;
          if (ppSVar24 == (SpvReflectToYaml **)0x0) {
LAB_00aef740:
            ppSVar17 = ppSVar22;
          }
          else {
            pSVar10 = (SpvReflectToYaml *)(*(long *)(lVar9 + 0x28) + uVar18 * 0x168);
            ppSVar17 = ppSVar22;
            do {
              if (ppSVar24[4] >= pSVar10) {
                ppSVar17 = ppSVar24;
              }
              ppSVar24 = (SpvReflectToYaml **)ppSVar24[ppSVar24[4] < pSVar10];
            } while (ppSVar24 != (SpvReflectToYaml **)0x0);
            if ((ppSVar17 == ppSVar22) || (pSVar10 < ppSVar17[4])) goto LAB_00aef740;
          }
          uVar21 = (ulong)(local_d8 >> 1);
          pcVar15 = pcVar11;
          if ((local_d8 & 1) != 0) {
            uVar21 = local_d0;
            pcVar15 = local_c8;
          }
                    /* try { // try from 00aef760 to 00aef793 has its CatchHandler @ 00aef9fc */
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar15,uVar21);
          pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar5,"- *td",5);
          cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                             *(uint *)(ppSVar17 + 5));
          std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef794 to 00aef7af has its CatchHandler @ 00aef9c0 */
          plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
          (**(code **)(*plVar6 + 0x38))(plVar6,10);
          std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef7bc to 00aef7cf has its CatchHandler @ 00aef9fc */
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
          uVar18 = (ulong)((int)uVar18 + 1);
          lVar9 = *(long *)(*(long *)this + 0x498);
        } while (uVar18 < *(ulong *)(lVar9 + 0x20));
      }
    }
  }
                    /* try { // try from 00aef7e8 to 00aef813 has its CatchHandler @ 00aefa48 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"...",3);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aef814 to 00aef833 has its CatchHandler @ 00aef918 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_f0);
                    /* try { // try from 00aef840 to 00aef853 has its CatchHandler @ 00aefa48 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
LAB_00aef880:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


