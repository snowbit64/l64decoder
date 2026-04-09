// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteTypeDescription
// Entry Point: 00ae7a00
// Size: 5532 bytes
// Signature: undefined __thiscall WriteTypeDescription(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectTypeDescription * param_2, uint param_3)


/* WARNING: Type propagation algorithm not settling */
/* SpvReflectToYaml::WriteTypeDescription(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectTypeDescription const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteTypeDescription
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectTypeDescription *param_2,
          uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  void *__s;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  id local_120 [8];
  ulong local_118;
  char *local_110;
  id local_108;
  undefined2 local_107;
  undefined uStack_105;
  undefined uStack_104;
  undefined uStack_103;
  undefined uStack_102;
  undefined uStack_101;
  undefined4 uStack_100;
  uint uStack_fc;
  char *local_f8;
  undefined8 local_f0;
  ulong local_e8;
  void *local_e0;
  undefined8 local_d8;
  ulong local_d0;
  char *local_c8;
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
  if (*(int *)(param_2 + 0x15c) != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      WriteTypeDescription
                (this,param_1,(SpvReflectTypeDescription *)(*(long *)(param_2 + 0x160) + lVar12),
                 param_3);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x168;
    } while (uVar13 < *(uint *)(param_2 + 0x15c));
  }
  uVar2 = param_3 * 2;
  uVar13 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    local_90 = CONCAT71(local_90._1_7_,(char)(param_3 << 2));
    if (uVar2 != 0) {
      pcVar16 = (char *)((ulong)&local_90 | 1);
      goto LAB_00ae7ac4;
    }
    pcVar16 = (char *)((ulong)&local_a8 | 1);
    uVar14 = 2;
    *(undefined *)((long)&local_90 + uVar13 + 1) = 0;
    local_a8 = CONCAT71(local_a8._1_7_,(char)param_3 * '\x04' + '\x04');
LAB_00ae7b40:
    memset(pcVar16,0x20,uVar14);
  }
  else {
    uVar14 = uVar13 + 0x10 & 0x1fffffff0;
    pcVar16 = (char *)operator_new(uVar14);
    local_90 = uVar14 | 1;
    local_88 = uVar13;
    local_80 = pcVar16;
LAB_00ae7ac4:
    memset(pcVar16,0x20,uVar13);
    uVar1 = uVar2 + 2;
    uVar14 = (ulong)uVar1;
    pcVar16[uVar13] = '\0';
    if (0x16 < uVar1) {
      uVar13 = uVar14 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae7b04 to 00ae7b0b has its CatchHandler @ 00ae8fb0 */
      pcVar16 = (char *)operator_new(uVar13);
      local_a8 = uVar13 | 1;
      local_a0 = uVar14;
      local_98 = pcVar16;
      goto LAB_00ae7b40;
    }
    pcVar16 = (char *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT71(local_a8._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) goto LAB_00ae7b40;
  }
  uVar1 = uVar2 + 4;
  uVar13 = (ulong)uVar1;
  pcVar16[uVar14] = '\0';
  if (uVar1 < 0x17) {
    local_c0 = CONCAT71(local_c0._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) {
      pcVar16 = (char *)((ulong)&local_c0 | 1);
      goto LAB_00ae7b98;
    }
    pcVar16 = (char *)((ulong)&local_d8 | 1);
    uVar14 = 2;
    *(undefined *)((long)&local_c0 + uVar13 + 1) = 0;
    local_d8 = CONCAT71(local_d8._1_7_,(char)param_3 * '\x04' + '\f');
LAB_00ae7c14:
    memset(pcVar16,0x20,uVar14);
  }
  else {
    uVar14 = uVar13 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae7b80 to 00ae7b87 has its CatchHandler @ 00ae8fd0 */
    pcVar16 = (char *)operator_new(uVar14);
    local_c0 = uVar14 | 1;
    local_b8 = uVar13;
    local_b0 = pcVar16;
LAB_00ae7b98:
    memset(pcVar16,0x20,uVar13);
    uVar1 = uVar2 + 6;
    uVar14 = (ulong)uVar1;
    pcVar16[uVar13] = '\0';
    if (0x16 < uVar1) {
      uVar13 = uVar14 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae7bd8 to 00ae7bdf has its CatchHandler @ 00ae8fa0 */
      pcVar16 = (char *)operator_new(uVar13);
      local_d8 = uVar13 | 1;
      local_d0 = uVar14;
      local_c8 = pcVar16;
      goto LAB_00ae7c14;
    }
    pcVar16 = (char *)((ulong)&local_d8 | 1);
    local_d8 = CONCAT71(local_d8._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) goto LAB_00ae7c14;
  }
  uVar2 = uVar2 + 8;
  uVar13 = (ulong)uVar2;
  pcVar16[uVar14] = '\0';
  if (uVar2 < 0x17) {
    __s = (void *)((ulong)&local_f0 | 1);
    local_f0 = CONCAT71(local_f0._1_7_,(char)uVar2 * '\x02');
    if (uVar2 != 0) goto LAB_00ae7c6c;
  }
  else {
    uVar14 = uVar13 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00ae7c54 to 00ae7c5b has its CatchHandler @ 00ae8fc0 */
    __s = operator_new(uVar14);
    local_f0 = uVar14 | 1;
    local_e8 = uVar13;
    local_e0 = __s;
LAB_00ae7c6c:
    memset(__s,0x20,uVar13);
  }
  *(undefined *)((long)__s + uVar13) = 0;
  puVar10 = (undefined8 *)(this + 0x18);
  puVar7 = puVar10;
  puVar8 = puVar10;
  if ((undefined8 *)*puVar10 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puVar10;
    puVar8 = (undefined8 *)(this + 0x18);
    do {
      while (puVar7 = puVar15, param_2 < (SpvReflectTypeDescription *)puVar7[4]) {
        puVar15 = (undefined8 *)*puVar7;
        puVar8 = puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) goto LAB_00ae7cdc;
      }
      if (param_2 <= (SpvReflectTypeDescription *)puVar7[4]) break;
      puVar8 = puVar7 + 1;
      puVar15 = (undefined8 *)*puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
LAB_00ae7cdc:
  puVar15 = (undefined8 *)*puVar8;
  uVar2 = *(uint *)(this + 0x20);
  if (puVar15 == (undefined8 *)0x0) {
                    /* try { // try from 00ae7cf0 to 00ae7cf7 has its CatchHandler @ 00ae8f9c */
    puVar15 = (undefined8 *)operator_new(0x30);
    puVar15[4] = param_2;
    *(undefined4 *)(puVar15 + 5) = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = puVar7;
    *puVar8 = puVar15;
    puVar7 = puVar15;
    if (**(long **)(this + 0x10) != 0) {
      *(long *)(this + 0x10) = **(long **)(this + 0x10);
      puVar7 = (undefined8 *)*puVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)puVar7);
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
  }
  *(uint *)(puVar15 + 5) = uVar2;
  uVar13 = local_90 >> 1 & 0x7f;
  pcVar16 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    uVar13 = local_88;
    pcVar16 = local_80;
  }
                    /* try { // try from 00ae7d68 to 00ae7d9f has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"- &td",5);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae7da0 to 00ae7dbf has its CatchHandler @ 00ae9064 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae7dcc to 00ae7e3b has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar17 = (char *)((ulong)&local_a8 | 1);
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"id: ",4);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)param_2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae7e3c to 00ae7e5b has its CatchHandler @ 00ae9060 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae7e68 to 00ae7ecf has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"op: ",4);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(int *)(param_2 + 4));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae7ed0 to 00ae7eef has its CatchHandler @ 00ae905c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae7efc to 00ae7f43 has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pcVar16 = "type_name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"type_name: ",0xb);
                    /* try { // try from 00ae7f4c to 00ae7f57 has its CatchHandler @ 00ae8ffc */
  SafeString(*(SpvReflectToYaml **)(param_2 + 8),pcVar16);
  uVar13 = (ulong)((byte)local_108 >> 1);
  pcVar16 = (char *)((ulong)&local_108 | 1);
  if (((byte)local_108 & 1) != 0) {
    uVar13 = CONCAT44(uStack_fc,uStack_100);
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae7f74 to 00ae7f93 has its CatchHandler @ 00ae9090 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae7f94 to 00ae7fb3 has its CatchHandler @ 00ae904c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_120);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_120);
                    /* try { // try from 00ae7fc0 to 00ae7fd3 has its CatchHandler @ 00ae9090 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae8000 to 00ae8017 has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pcVar16 = "struct_member_name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"struct_member_name: ",0x14);
                    /* try { // try from 00ae8020 to 00ae802b has its CatchHandler @ 00ae8ff8 */
  SafeString(*(SpvReflectToYaml **)(param_2 + 0x10),pcVar16);
  uVar13 = (ulong)((byte)local_108 >> 1);
  pcVar16 = (char *)((ulong)&local_108 | 1);
  if (((byte)local_108 & 1) != 0) {
    uVar13 = CONCAT44(uStack_fc,uStack_100);
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae8048 to 00ae8067 has its CatchHandler @ 00ae908c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8068 to 00ae8087 has its CatchHandler @ 00ae9048 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_120);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_120);
                    /* try { // try from 00ae8094 to 00ae80a7 has its CatchHandler @ 00ae908c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae80d4 to 00ae8103 has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"storage_class: ",0xf);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x18));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00ae810c to 00ae8117 has its CatchHandler @ 00ae8ff4 */
  ToStringSpvStorageClass(*(SpvStorageClass_ *)(param_2 + 0x18));
  uVar13 = (ulong)((byte)local_108 >> 1);
  pcVar16 = (char *)((ulong)&local_108 | 1);
  if (((byte)local_108 & 1) != 0) {
    uVar13 = CONCAT44(uStack_fc,uStack_100);
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae8134 to 00ae8153 has its CatchHandler @ 00ae9088 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8154 to 00ae8173 has its CatchHandler @ 00ae9044 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_120);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_120);
                    /* try { // try from 00ae8180 to 00ae8193 has its CatchHandler @ 00ae9088 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae81c0 to 00ae81d7 has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"type_flags: ",0xc);
                    /* try { // try from 00ae81e0 to 00ae81eb has its CatchHandler @ 00ae8ff0 */
  FUN_00ae9274(&local_108,*(undefined4 *)(param_2 + 0x1c));
  uVar13 = (ulong)((byte)local_108 >> 1);
  pcVar16 = (char *)((ulong)&local_108 | 1);
  if (((byte)local_108 & 1) != 0) {
    uVar13 = CONCAT44(uStack_fc,uStack_100);
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae8208 to 00ae821f has its CatchHandler @ 00ae9040 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00ae8228 to 00ae8233 has its CatchHandler @ 00ae8fec */
  ToStringTypeFlags(*(uint *)(param_2 + 0x1c));
  uVar13 = (ulong)((byte)local_120[0] >> 1);
  pcVar16 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar13 = local_118;
    pcVar16 = local_110;
  }
                    /* try { // try from 00ae8250 to 00ae826f has its CatchHandler @ 00ae9070 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8270 to 00ae828f has its CatchHandler @ 00ae9030 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00ae829c to 00ae82af has its CatchHandler @ 00ae9070 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae82ec to 00ae8303 has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"decoration_flags: ",0x12);
                    /* try { // try from 00ae830c to 00ae8317 has its CatchHandler @ 00ae8fe8 */
  FUN_00ae9274(&local_108,*(undefined4 *)(param_2 + 0x20));
  uVar13 = (ulong)((byte)local_108 >> 1);
  pcVar16 = (char *)((ulong)&local_108 | 1);
  if (((byte)local_108 & 1) != 0) {
    uVar13 = CONCAT44(uStack_fc,uStack_100);
    pcVar16 = local_f8;
  }
                    /* try { // try from 00ae8334 to 00ae834b has its CatchHandler @ 00ae902c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00ae8354 to 00ae835f has its CatchHandler @ 00ae8fe4 */
  ToStringDecorationFlags(*(uint *)(param_2 + 0x20));
  uVar13 = (ulong)((byte)local_120[0] >> 1);
  pcVar16 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar13 = local_118;
    pcVar16 = local_110;
  }
                    /* try { // try from 00ae837c to 00ae839b has its CatchHandler @ 00ae906c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae839c to 00ae83bb has its CatchHandler @ 00ae9028 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00ae83c8 to 00ae83db has its CatchHandler @ 00ae906c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar16 = local_98;
  }
                    /* try { // try from 00ae8418 to 00ae8447 has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"traits:",7);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8448 to 00ae8467 has its CatchHandler @ 00ae9024 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae8474 to 00ae84df has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar11 = (char *)((ulong)&local_c0 | 1);
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"numeric:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae84e0 to 00ae84ff has its CatchHandler @ 00ae9020 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae850c to 00ae85cf has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar18 = (char *)((ulong)&local_d8 | 1);
  uVar13 = local_d8 >> 1 & 0x7f;
  pcVar16 = pcVar18;
  if ((local_d8 & 1) != 0) {
    uVar13 = local_d0;
    pcVar16 = local_c8;
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
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x28))
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae85d0 to 00ae85ef has its CatchHandler @ 00ae901c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae85fc to 00ae868b has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_d8 >> 1 & 0x7f;
  pcVar16 = pcVar18;
  if ((local_d8 & 1) != 0) {
    uVar13 = local_d0;
    pcVar16 = local_c8;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"vector: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"component_count: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x2c))
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae868c to 00ae86ab has its CatchHandler @ 00ae9018 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae86b8 to 00ae879f has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_d8 >> 1 & 0x7f;
  if ((local_d8 & 1) != 0) {
    uVar13 = local_d0;
    pcVar18 = local_c8;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar18,uVar13);
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
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x38))
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae87a0 to 00ae87bf has its CatchHandler @ 00ae9014 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae87cc to 00ae8933 has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"image: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dim: ",5);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x3c));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"depth: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x40));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"arrayed: ",9);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x44));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"ms: ",4);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x48));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"sampled: ",9);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x4c));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"image_format: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(int *)(param_2 + 0x50));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # dim=",7);
  switch(*(uint *)(param_2 + 0x3c)) {
  case 0:
    local_107 = 0x4431;
    goto LAB_00ae89a4;
  case 1:
    local_107 = 0x4432;
    goto LAB_00ae89a4;
  case 2:
    local_107 = 0x4433;
LAB_00ae89a4:
    uVar13 = 2;
    local_108 = (id)0x4;
    uStack_105 = 0;
    break;
  case 3:
    uVar9 = 0x65627543;
    goto LAB_00ae89c4;
  case 4:
    uVar9 = 0x74636552;
LAB_00ae89c4:
    uVar13 = 4;
    local_108 = (id)0x8;
    local_107 = (undefined2)uVar9;
    uStack_105 = (undefined)((uint)uVar9 >> 0x10);
    uStack_104 = (undefined)((uint)uVar9 >> 0x18);
    uStack_103 = 0;
    break;
  case 5:
    uVar13 = 6;
    uStack_101 = 0;
    local_108 = (id)0xc;
    local_107 = 0x7542;
    uStack_105 = 0x66;
    uStack_104 = 0x66;
    uStack_103 = 0x65;
    uStack_102 = 0x72;
    break;
  case 6:
    uVar13 = 0xb;
    uStack_fc = uStack_fc & 0xffffff00;
    local_108 = (id)0x16;
    local_107 = 0x7553;
    uStack_105 = 0x62;
    uStack_104 = 0x70;
    uStack_103 = 0x61;
    uStack_102 = 0x73;
    uStack_101 = 0x73;
    uStack_100 = 0x61746144;
    break;
  default:
    uVar13 = 3;
    local_108 = (id)0x6;
    local_107 = 0x3f3f;
    uStack_105 = 0x3f;
    uStack_104 = 0;
  }
                    /* try { // try from 00ae8a34 to 00ae8a47 has its CatchHandler @ 00ae9010 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,(char *)((ulong)&local_108 | 1),uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," image_format=",0xe);
                    /* try { // try from 00ae8a50 to 00ae8a5b has its CatchHandler @ 00ae8fe0 */
  ToStringSpvImageFormat(*(SpvImageFormat_ *)(param_2 + 0x50));
  uVar13 = (ulong)((byte)local_120[0] >> 1);
  pcVar16 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar13 = local_118;
    pcVar16 = local_110;
  }
                    /* try { // try from 00ae8a78 to 00ae8a97 has its CatchHandler @ 00ae9068 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar16,uVar13);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8a98 to 00ae8ab7 has its CatchHandler @ 00ae900c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00ae8ac4 to 00ae8ad7 has its CatchHandler @ 00ae9068 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  uVar13 = local_c0 >> 1 & 0x7f;
  pcVar16 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar13 = local_b8;
    pcVar16 = local_b0;
  }
                    /* try { // try from 00ae8b18 to 00ae8b6f has its CatchHandler @ 00ae9104 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar16,uVar13);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"array: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dims_count: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x54));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"dims: [",7);
  if (*(int *)(param_2 + 0x54) != 0) {
    uVar13 = 0;
    do {
                    /* try { // try from 00ae8b8c to 00ae8b9f has its CatchHandler @ 00ae90fc */
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                          *(uint *)(param_2 + uVar13 * 4 + 0x58));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",",1);
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x54));
  }
                    /* try { // try from 00ae8bb0 to 00ae8c0b has its CatchHandler @ 00ae9104 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"], ",3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"stride: ",8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x158)
            );
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8c0c to 00ae8c2b has its CatchHandler @ 00ae9008 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae8c38 to 00ae8c9f has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  pcVar16 = pcVar17;
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
                     *(uint *)(param_2 + 0x15c));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8ca0 to 00ae8cbf has its CatchHandler @ 00ae9004 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae8ccc to 00ae8d2b has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar13 = local_a8 >> 1 & 0x7f;
  if ((local_a8 & 1) != 0) {
    uVar13 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar13);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"members:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8d2c to 00ae8d4b has its CatchHandler @ 00ae9000 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae8d58 to 00ae8d6b has its CatchHandler @ 00ae9104 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (*(int *)(param_2 + 0x15c) != 0) {
    uVar13 = 0;
    do {
      pcVar16 = pcVar11;
      uVar14 = local_c0 >> 1 & 0x7f;
      if ((local_c0 & 1) != 0) {
        pcVar16 = local_b0;
        uVar14 = local_b8;
      }
                    /* try { // try from 00ae8dac to 00ae8dbb has its CatchHandler @ 00ae90f8 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar16,uVar14);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *td",5);
      uVar14 = *(long *)(param_2 + 0x160) + uVar13 * 0x168;
      puVar15 = (undefined8 *)*puVar10;
      puVar7 = puVar10;
      puVar8 = puVar10;
      while (puVar15 != (undefined8 *)0x0) {
        while (puVar8 = puVar15, uVar14 < (ulong)puVar8[4]) {
          puVar7 = puVar8;
          puVar15 = (undefined8 *)*puVar8;
          if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)*puVar8;
            goto joined_r0x00ae8e68;
          }
        }
        if (uVar14 <= (ulong)puVar8[4]) break;
        puVar7 = puVar8 + 1;
        puVar15 = (undefined8 *)*puVar7;
      }
      puVar15 = (undefined8 *)*puVar7;
joined_r0x00ae8e68:
      if (puVar15 == (undefined8 *)0x0) {
                    /* try { // try from 00ae8e24 to 00ae8eab has its CatchHandler @ 00ae9100 */
        puVar15 = (undefined8 *)operator_new(0x30);
        puVar15[4] = uVar14;
        *(undefined4 *)(puVar15 + 5) = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = puVar8;
        *puVar7 = puVar15;
        puVar8 = puVar15;
        if (**(long **)(this + 0x10) != 0) {
          *(long *)(this + 0x10) = **(long **)(this + 0x10);
          puVar8 = (undefined8 *)*puVar7;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)puVar8);
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
      }
      cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                         *(uint *)(puVar15 + 5));
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00ae8eac to 00ae8ec7 has its CatchHandler @ 00ae90e0 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(&local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_108);
                    /* try { // try from 00ae8ed4 to 00ae8ee7 has its CatchHandler @ 00ae9100 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x15c));
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
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
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


