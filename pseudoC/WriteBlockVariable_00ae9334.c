// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteBlockVariable
// Entry Point: 00ae9334
// Size: 4196 bytes
// Signature: undefined __thiscall WriteBlockVariable(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectBlockVariable * param_2, uint param_3)


/* WARNING: Type propagation algorithm not settling */
/* SpvReflectToYaml::WriteBlockVariable(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectBlockVariable const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteBlockVariable
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectBlockVariable *param_2,
          uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  SpvReflectToYaml *pSVar7;
  undefined8 *puVar8;
  SpvReflectToYaml **ppSVar9;
  long lVar10;
  char *pcVar11;
  SpvReflectToYaml **ppSVar12;
  ulong uVar13;
  ulong uVar14;
  void *__s;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  SpvReflectToYaml **ppSVar18;
  char *pcVar19;
  undefined8 *puVar20;
  id local_108 [8];
  ulong local_100;
  char *local_f8;
  id local_f0 [8];
  ulong local_e8;
  char *local_e0;
  undefined8 local_d8;
  ulong local_d0;
  void *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  char *local_b0;
  undefined8 local_a8;
  ulong local_a0;
  char *local_98;
  undefined8 local_90;
  ulong local_88;
  char *local_80;
  id aiStack_78 [8];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_2 + 0x148) != 0) {
    lVar10 = 0;
    uVar13 = 0;
    do {
      WriteBlockVariable(this,param_1,
                         (SpvReflectBlockVariable *)(*(long *)(param_2 + 0x150) + lVar10),param_3);
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0x160;
    } while (uVar13 < *(uint *)(param_2 + 0x148));
  }
  uVar2 = param_3 * 2;
  uVar13 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    local_90 = CONCAT71(local_90._1_7_,(char)(param_3 << 2));
    if (uVar2 != 0) {
      pcVar16 = (char *)((ulong)&local_90 | 1);
      goto LAB_00ae93f4;
    }
    pcVar16 = (char *)((ulong)&local_a8 | 1);
    uVar14 = 2;
    *(undefined *)((long)&local_90 + uVar13 + 1) = 0;
    local_a8 = CONCAT71(local_a8._1_7_,(char)param_3 * '\x04' + '\x04');
LAB_00ae9470:
    memset(pcVar16,0x20,uVar14);
  }
  else {
    uVar14 = uVar13 + 0x10 & 0x1fffffff0;
    pcVar16 = (char *)operator_new(uVar14);
    local_90 = uVar14 | 1;
    local_88 = uVar13;
    local_80 = pcVar16;
LAB_00ae93f4:
    memset(pcVar16,0x20,uVar13);
    uVar1 = uVar2 + 2;
    uVar14 = (ulong)uVar1;
    pcVar16[uVar13] = '\0';
    if (0x16 < uVar1) {
      uVar13 = uVar14 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae9434 to 00ae943b has its CatchHandler @ 00aea3ac */
      pcVar16 = (char *)operator_new(uVar13);
      local_a8 = uVar13 | 1;
      local_a0 = uVar14;
      local_98 = pcVar16;
      goto LAB_00ae9470;
    }
    pcVar16 = (char *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT71(local_a8._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) goto LAB_00ae9470;
  }
  uVar1 = uVar2 + 4;
  uVar13 = (ulong)uVar1;
  pcVar16[uVar14] = '\0';
  if (uVar1 < 0x17) {
    local_c0 = CONCAT71(local_c0._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) {
      pcVar16 = (char *)((ulong)&local_c0 | 1);
      goto LAB_00ae94c8;
    }
    uVar14 = 2;
    __s = (void *)((ulong)&local_d8 | 1);
    *(undefined *)((long)&local_c0 + uVar13 + 1) = 0;
    local_d8 = CONCAT71(local_d8._1_7_,(char)param_3 * '\x04' + '\f');
LAB_00ae954c:
    memset(__s,0x20,uVar14);
  }
  else {
    uVar14 = uVar13 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae94b0 to 00ae94b7 has its CatchHandler @ 00aea3c0 */
    pcVar16 = (char *)operator_new(uVar14);
    local_c0 = uVar14 | 1;
    local_b8 = uVar13;
    local_b0 = pcVar16;
LAB_00ae94c8:
    memset(pcVar16,0x20,uVar13);
    uVar2 = uVar2 + 6;
    uVar14 = (ulong)uVar2;
    pcVar16[uVar13] = '\0';
    if (0x16 < uVar2) {
      uVar13 = uVar14 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae950c to 00ae9513 has its CatchHandler @ 00aea39c */
      __s = operator_new(uVar13);
      local_d8 = uVar13 | 1;
      local_d0 = uVar14;
      local_c8 = __s;
      goto LAB_00ae954c;
    }
    __s = (void *)((ulong)&local_d8 | 1);
    local_d8 = CONCAT71(local_d8._1_7_,(char)uVar2 * '\x02');
    if (uVar2 != 0) goto LAB_00ae954c;
  }
  *(undefined *)((long)__s + uVar14) = 0;
  puVar20 = (undefined8 *)(this + 0x30);
  puVar8 = puVar20;
  puVar17 = puVar20;
  if ((undefined8 *)*puVar20 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puVar20;
    puVar17 = (undefined8 *)(this + 0x30);
    do {
      while (puVar8 = puVar15, param_2 < (SpvReflectBlockVariable *)puVar8[4]) {
        puVar15 = (undefined8 *)*puVar8;
        puVar17 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_00ae95b8;
      }
      if (param_2 <= (SpvReflectBlockVariable *)puVar8[4]) break;
      puVar17 = puVar8 + 1;
      puVar15 = (undefined8 *)*puVar17;
    } while ((undefined8 *)*puVar17 != (undefined8 *)0x0);
  }
LAB_00ae95b8:
  puVar15 = (undefined8 *)*puVar17;
  uVar2 = *(uint *)(this + 0x38);
  if (puVar15 == (undefined8 *)0x0) {
                    /* try { // try from 00ae95c4 to 00ae95cb has its CatchHandler @ 00aea398 */
    puVar15 = (undefined8 *)operator_new(0x30);
    puVar15[4] = param_2;
    *(undefined4 *)(puVar15 + 5) = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = puVar8;
    *puVar17 = puVar15;
    puVar8 = puVar15;
    if (**(long **)(this + 0x28) != 0) {
      *(long *)(this + 0x28) = **(long **)(this + 0x28);
      puVar8 = (undefined8 *)*puVar17;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),(__tree_node_base *)puVar8);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  *(uint *)(puVar15 + 5) = uVar2;
  uVar13 = local_90 >> 1 & 0x7f;
  pcVar16 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    uVar13 = local_88;
    pcVar16 = local_80;
  }
                    /* try { // try from 00ae9638 to 00ae966f has its CatchHandler @ 00aea4b4 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"- &bv",5);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9670 to 00ae968f has its CatchHandler @ 00aea430 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae969c to 00ae96e7 has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar11 = (char *)((ulong)&local_a8 | 1);
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pcVar16 = "name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"name: ",6);
                    /* try { // try from 00ae96f4 to 00ae96ff has its CatchHandler @ 00aea3dc */
  SafeString(*(SpvReflectToYaml **)(param_2 + 8),pcVar16);
  uVar13 = (ulong)((byte)local_f0[0] >> 1);
  pcVar16 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar13 = local_e8;
    pcVar16 = local_e0;
  }
                    /* try { // try from 00ae971c to 00ae973f has its CatchHandler @ 00aea450 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9740 to 00ae975f has its CatchHandler @ 00aea420 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00ae976c to 00ae977f has its CatchHandler @ 00aea450 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae97a8 to 00ae97df has its CatchHandler @ 00aea4b4 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"offset: ",8);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x10));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae97e0 to 00ae97ff has its CatchHandler @ 00aea41c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae980c to 00ae986f has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"absolute_offset: ",0x11);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x14));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9870 to 00ae988f has its CatchHandler @ 00aea418 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae989c to 00ae98ff has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"size: ",6);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x18));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9900 to 00ae991f has its CatchHandler @ 00aea414 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae992c to 00ae998f has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"padded_size: ",0xd);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x1c));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9990 to 00ae99af has its CatchHandler @ 00aea410 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae99bc to 00ae99ff has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"decorations: ",0xd);
                    /* try { // try from 00ae9a08 to 00ae9a13 has its CatchHandler @ 00aea3d8 */
  FUN_00ae9274(local_f0,*(undefined4 *)(param_2 + 0x20));
  uVar13 = (ulong)((byte)local_f0[0] >> 1);
  pcVar16 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar13 = local_e8;
    pcVar16 = local_e0;
  }
                    /* try { // try from 00ae9a30 to 00ae9a47 has its CatchHandler @ 00aea40c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00ae9a50 to 00ae9a5b has its CatchHandler @ 00aea3d4 */
  ToStringDecorationFlags(*(uint *)(param_2 + 0x20));
  uVar13 = (ulong)((byte)local_108[0] >> 1);
  pcVar16 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar13 = local_100;
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae9a78 to 00ae9a9b has its CatchHandler @ 00aea438 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9a9c to 00ae9abb has its CatchHandler @ 00aea3fc */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00ae9ac8 to 00ae9adb has its CatchHandler @ 00aea438 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae9b14 to 00ae9b43 has its CatchHandler @ 00aea4b4 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"numeric:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9b44 to 00ae9b63 has its CatchHandler @ 00aea3f8 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9b70 to 00ae9c2b has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar19 = (char *)((ulong)&local_c0 | 1);
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar19;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"scalar: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"width: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x24));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"signedness: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x28));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9c2c to 00ae9c4b has its CatchHandler @ 00aea3f4 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9c58 to 00ae9cdf has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar19;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"vector: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"component_count: ",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x2c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9ce0 to 00ae9cff has its CatchHandler @ 00aea3f0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9d0c to 00ae9deb has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar19;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"matrix: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"column_count: ",0xe);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"row_count: ",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x34));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"stride: ",8);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x38));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9dec to 00ae9e0b has its CatchHandler @ 00aea3ec */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9e18 to 00ae9e9b has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"array: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dims_count: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x3c));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"dims: [",7);
  if (*(int *)(param_2 + 0x3c) != 0) {
    uVar13 = 0;
    do {
                    /* try { // try from 00ae9eb8 to 00ae9ecb has its CatchHandler @ 00aea4b0 */
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                          *(uint *)(param_2 + uVar13 * 4 + 0x40));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",",1);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x3c));
  }
                    /* try { // try from 00ae9edc to 00ae9f3b has its CatchHandler @ 00aea4b4 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"], ",3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"stride: ",8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x140)
            );
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9f3c to 00ae9f5b has its CatchHandler @ 00aea3e8 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9f68 to 00ae9fcb has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"member_count: ",0xe);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x148));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae9fcc to 00ae9feb has its CatchHandler @ 00aea3e4 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00ae9ff8 to 00aea053 has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"members:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea054 to 00aea073 has its CatchHandler @ 00aea3e0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aea080 to 00aea093 has its CatchHandler @ 00aea4b4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (*(int *)(param_2 + 0x148) != 0) {
    uVar13 = 0;
    do {
      puVar8 = (undefined8 *)*puVar20;
      if (puVar8 == (undefined8 *)0x0) {
LAB_00aea0f8:
        puVar17 = puVar20;
      }
      else {
        uVar14 = *(long *)(param_2 + 0x150) + uVar13 * 0x160;
        puVar17 = puVar20;
        do {
          if ((ulong)puVar8[4] >= uVar14) {
            puVar17 = puVar8;
          }
          puVar8 = (undefined8 *)puVar8[(ulong)puVar8[4] < uVar14];
        } while (puVar8 != (undefined8 *)0x0);
        if ((puVar17 == puVar20) || (uVar14 < (ulong)puVar17[4])) goto LAB_00aea0f8;
      }
      uVar14 = local_c0 >> 1 & 0x7f;
      pcVar16 = pcVar19;
      if ((local_c0 & 1) != 0) {
        uVar14 = local_b8;
        pcVar16 = local_b0;
      }
                    /* try { // try from 00aea114 to 00aea147 has its CatchHandler @ 00aea4b8 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar16,uVar14);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *bv",5);
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(puVar17 + 5));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea148 to 00aea163 has its CatchHandler @ 00aea498 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aea170 to 00aea183 has its CatchHandler @ 00aea4b8 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x148));
  }
  if (*(int *)(this + 8) == 0) goto LAB_00aea308;
  pSVar7 = *(SpvReflectToYaml **)(param_2 + 0x158);
  if (pSVar7 == (SpvReflectToYaml *)0x0) {
    uVar13 = (ulong)((byte)local_a8 >> 1);
    if ((local_a8 & 1) != 0) {
      uVar13 = local_a0;
      pcVar11 = local_98;
    }
                    /* try { // try from 00aea298 to 00aea2c7 has its CatchHandler @ 00aea4b4 */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar11,uVar13);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"type_description:",0x11);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea2c8 to 00aea2e7 has its CatchHandler @ 00aea3bc */
    plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aea2f4 to 00aea307 has its CatchHandler @ 00aea4b4 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    goto LAB_00aea308;
  }
  ppSVar18 = (SpvReflectToYaml **)(this + 0x18);
  ppSVar9 = (SpvReflectToYaml **)*ppSVar18;
  ppSVar12 = ppSVar18;
  if (ppSVar9 == (SpvReflectToYaml **)0x0) {
LAB_00aea1e4:
    ppSVar12 = ppSVar18;
  }
  else {
    do {
      if (ppSVar9[4] >= pSVar7) {
        ppSVar12 = ppSVar9;
      }
      ppSVar9 = (SpvReflectToYaml **)ppSVar9[ppSVar9[4] < pSVar7];
    } while (ppSVar9 != (SpvReflectToYaml **)0x0);
    if ((ppSVar12 == ppSVar18) || (pSVar7 < ppSVar12[4])) goto LAB_00aea1e4;
  }
  uVar13 = (ulong)((byte)local_a8 >> 1);
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar11 = local_98;
  }
                    /* try { // try from 00aea204 to 00aea23b has its CatchHandler @ 00aea434 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar11,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"type_description: *td",0x15);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(ppSVar12 + 5));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aea23c to 00aea25b has its CatchHandler @ 00aea3d0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aea268 to 00aea27b has its CatchHandler @ 00aea434 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
LAB_00aea308:
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


