// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteInterfaceVariable
// Entry Point: 00aebb50
// Size: 5088 bytes
// Signature: undefined __thiscall WriteInterfaceVariable(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectInterfaceVariable * param_2, uint param_3)


/* WARNING: Type propagation algorithm not settling */
/* SpvReflectToYaml::WriteInterfaceVariable(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectInterfaceVariable const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteInterfaceVariable
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectInterfaceVariable *param_2,
          uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  undefined8 *puVar7;
  SpvReflectToYaml *pSVar8;
  undefined8 *puVar9;
  SpvReflectToYaml **ppSVar10;
  char *pcVar11;
  long lVar12;
  SpvReflectToYaml **ppSVar13;
  ulong uVar14;
  ulong uVar15;
  void *__s;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  char *pcVar19;
  SpvReflectToYaml **ppSVar20;
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
    lVar12 = 0;
    uVar14 = 0;
    do {
      WriteInterfaceVariable
                (this,param_1,(SpvReflectInterfaceVariable *)(*(long *)(param_2 + 0x150) + lVar12),
                 param_3);
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x170;
    } while (uVar14 < *(uint *)(param_2 + 0x148));
  }
  uVar2 = param_3 * 2;
  uVar14 = (ulong)uVar2;
  if (uVar2 < 0x17) {
    local_90 = CONCAT71(local_90._1_7_,(char)(param_3 << 2));
    if (uVar2 != 0) {
      pcVar17 = (char *)((ulong)&local_90 | 1);
      goto LAB_00aebc0c;
    }
    pcVar17 = (char *)((ulong)&local_a8 | 1);
    uVar15 = 2;
    *(undefined *)((long)&local_90 + uVar14 + 1) = 0;
    local_a8 = CONCAT71(local_a8._1_7_,(char)param_3 * '\x04' + '\x04');
LAB_00aebc88:
    memset(pcVar17,0x20,uVar15);
  }
  else {
    uVar15 = uVar14 + 0x10 & 0x1fffffff0;
    pcVar17 = (char *)operator_new(uVar15);
    local_90 = uVar15 | 1;
    local_88 = uVar14;
    local_80 = pcVar17;
LAB_00aebc0c:
    memset(pcVar17,0x20,uVar14);
    uVar1 = uVar2 + 2;
    uVar15 = (ulong)uVar1;
    pcVar17[uVar14] = '\0';
    if (0x16 < uVar1) {
      uVar14 = uVar15 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aebc4c to 00aebc53 has its CatchHandler @ 00aecf44 */
      pcVar17 = (char *)operator_new(uVar14);
      local_a8 = uVar14 | 1;
      local_a0 = uVar15;
      local_98 = pcVar17;
      goto LAB_00aebc88;
    }
    pcVar17 = (char *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT71(local_a8._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) goto LAB_00aebc88;
  }
  uVar1 = uVar2 + 4;
  uVar14 = (ulong)uVar1;
  pcVar17[uVar15] = '\0';
  if (uVar1 < 0x17) {
    local_c0 = CONCAT71(local_c0._1_7_,(char)uVar1 * '\x02');
    if (uVar1 != 0) {
      pcVar17 = (char *)((ulong)&local_c0 | 1);
      goto LAB_00aebce0;
    }
    __s = (void *)((ulong)&local_d8 | 1);
    uVar15 = 2;
    *(undefined *)((long)&local_c0 + uVar14 + 1) = 0;
    local_d8 = CONCAT71(local_d8._1_7_,(char)param_3 * '\x04' + '\f');
LAB_00aebd5c:
    memset(__s,0x20,uVar15);
  }
  else {
    uVar15 = uVar14 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aebcc8 to 00aebccf has its CatchHandler @ 00aecf58 */
    pcVar17 = (char *)operator_new(uVar15);
    local_c0 = uVar15 | 1;
    local_b8 = uVar14;
    local_b0 = pcVar17;
LAB_00aebce0:
    memset(pcVar17,0x20,uVar14);
    uVar2 = uVar2 + 6;
    uVar15 = (ulong)uVar2;
    pcVar17[uVar14] = '\0';
    if (0x16 < uVar2) {
      uVar14 = uVar15 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00aebd20 to 00aebd27 has its CatchHandler @ 00aecf34 */
      __s = operator_new(uVar14);
      local_d8 = uVar14 | 1;
      local_d0 = uVar15;
      local_c8 = __s;
      goto LAB_00aebd5c;
    }
    __s = (void *)((ulong)&local_d8 | 1);
    local_d8 = CONCAT71(local_d8._1_7_,(char)uVar2 * '\x02');
    if (uVar2 != 0) goto LAB_00aebd5c;
  }
  *(undefined *)((long)__s + uVar15) = 0;
  puVar7 = (undefined8 *)(this + 0x60);
  puVar9 = puVar7;
  puVar18 = puVar7;
  if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)*puVar7;
    puVar18 = (undefined8 *)(this + 0x60);
    do {
      while (puVar9 = puVar16, param_2 < (SpvReflectInterfaceVariable *)puVar9[4]) {
        puVar16 = (undefined8 *)*puVar9;
        puVar18 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_00aebdd4;
      }
      if (param_2 <= (SpvReflectInterfaceVariable *)puVar9[4]) break;
      puVar18 = puVar9 + 1;
      puVar16 = (undefined8 *)*puVar18;
    } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
  }
LAB_00aebdd4:
  puVar16 = (undefined8 *)*puVar18;
  uVar2 = *(uint *)(this + 0x68);
  if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 00aebde0 to 00aebde7 has its CatchHandler @ 00aecf30 */
    puVar16 = (undefined8 *)operator_new(0x30);
    puVar16[4] = param_2;
    *(undefined4 *)(puVar16 + 5) = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = puVar9;
    *puVar18 = puVar16;
    puVar9 = puVar16;
    if (**(long **)(this + 0x58) != 0) {
      *(long *)(this + 0x58) = **(long **)(this + 0x58);
      puVar9 = (undefined8 *)*puVar18;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x60),(__tree_node_base *)puVar9);
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + 1;
  }
  *(uint *)(puVar16 + 5) = uVar2;
  uVar14 = local_90 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    uVar14 = local_88;
    pcVar17 = local_80;
  }
                    /* try { // try from 00aebe54 to 00aebe8b has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"- &iv",5);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aebe8c to 00aebeab has its CatchHandler @ 00aecfd8 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aebeb8 to 00aebf23 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar19 = (char *)((ulong)&local_a8 | 1);
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"spirv_id: ",10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)param_2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aebf24 to 00aebf43 has its CatchHandler @ 00aecfd4 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aebf50 to 00aebf93 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pcVar17 = "name: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"name: ",6);
                    /* try { // try from 00aebf9c to 00aebfa7 has its CatchHandler @ 00aecf84 */
  SafeString(*(SpvReflectToYaml **)(param_2 + 8),pcVar17);
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aebfc4 to 00aebfe3 has its CatchHandler @ 00aed01c */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aebfe4 to 00aec003 has its CatchHandler @ 00aecfd0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aec010 to 00aec023 has its CatchHandler @ 00aed01c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aec04c to 00aec083 has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"location: ",10);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x10));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec084 to 00aec0a3 has its CatchHandler @ 00aecfcc */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec0b0 to 00aec10b has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"storage_class: ",0xf);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x14));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aec114 to 00aec11f has its CatchHandler @ 00aecf80 */
  ToStringSpvStorageClass(*(SpvStorageClass_ *)(param_2 + 0x14));
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aec13c to 00aec15b has its CatchHandler @ 00aed018 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec15c to 00aec17b has its CatchHandler @ 00aecfc8 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aec188 to 00aec19b has its CatchHandler @ 00aed018 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aec1c4 to 00aec1db has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pcVar17 = "semantic: ";
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"semantic: ",10);
                    /* try { // try from 00aec1e4 to 00aec1ef has its CatchHandler @ 00aecf7c */
  SafeString(*(SpvReflectToYaml **)(param_2 + 0x18),pcVar17);
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aec20c to 00aec22b has its CatchHandler @ 00aed014 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec22c to 00aec24b has its CatchHandler @ 00aecfc4 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aec258 to 00aec26b has its CatchHandler @ 00aed014 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aec294 to 00aec2ab has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"decoration_flags: ",0x12);
                    /* try { // try from 00aec2b4 to 00aec2bf has its CatchHandler @ 00aecf78 */
  FUN_00ae9274(local_f0,*(undefined4 *)(param_2 + 0x20));
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aec2dc to 00aec2f3 has its CatchHandler @ 00aecfc0 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aec2fc to 00aec307 has its CatchHandler @ 00aecf74 */
  ToStringDecorationFlags(*(uint *)(param_2 + 0x20));
  uVar14 = (ulong)((byte)local_108[0] >> 1);
  pcVar17 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar14 = local_100;
    pcVar17 = local_f8;
  }
                    /* try { // try from 00aec324 to 00aec343 has its CatchHandler @ 00aecffc */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec344 to 00aec363 has its CatchHandler @ 00aecfb0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(aiStack_78);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)aiStack_78);
                    /* try { // try from 00aec370 to 00aec383 has its CatchHandler @ 00aecffc */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aec3bc to 00aec3eb has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"built_in: ",10);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x24));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aec3f4 to 00aec3ff has its CatchHandler @ 00aecf70 */
  ToStringSpvBuiltIn(*(SpvBuiltIn_ *)(param_2 + 0x24));
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aec41c to 00aec43b has its CatchHandler @ 00aecff8 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec43c to 00aec45b has its CatchHandler @ 00aecfac */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aec468 to 00aec47b has its CatchHandler @ 00aecff8 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aec4a4 to 00aec4d3 has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"numeric:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec4d4 to 00aec4f3 has its CatchHandler @ 00aecfa8 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec500 to 00aec5bf has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pcVar11 = (char *)((ulong)&local_c0 | 1);
  uVar14 = local_c0 >> 1 & 0x7f;
  pcVar17 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar14 = local_b8;
    pcVar17 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"scalar: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"width: ",7);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x28));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"signedness: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x2c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec5c0 to 00aec5df has its CatchHandler @ 00aecfa4 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec5ec to 00aec677 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_c0 >> 1 & 0x7f;
  pcVar17 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar14 = local_b8;
    pcVar17 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"vector: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"component_count: ",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x30));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec678 to 00aec697 has its CatchHandler @ 00aecfa0 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec6a4 to 00aec787 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_c0 >> 1 & 0x7f;
  pcVar17 = pcVar11;
  if ((local_c0 & 1) != 0) {
    uVar14 = local_b8;
    pcVar17 = local_b0;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"matrix: { ",10)
  ;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"column_count: ",0xe);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x34));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"row_count: ",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x38));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"stride: ",8);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x3c));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec788 to 00aec7a7 has its CatchHandler @ 00aecf9c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec7b4 to 00aec837 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"array: { ",9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"dims_count: ",0xc);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x40));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,", ",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"dims: [",7);
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar14 = 0;
    do {
                    /* try { // try from 00aec854 to 00aec867 has its CatchHandler @ 00aed034 */
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                          *(uint *)(param_2 + uVar14 * 4 + 0x44));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,",",1);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_2 + 0x40));
  }
                    /* try { // try from 00aec878 to 00aec8d3 has its CatchHandler @ 00aed084 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"], ",3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"stride: ",8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*(uint *)(param_2 + 0x144)
            );
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," }",2);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec8d4 to 00aec8f3 has its CatchHandler @ 00aecf98 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec900 to 00aec963 has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"member_count: ",0xe);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(param_2 + 0x148));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec964 to 00aec983 has its CatchHandler @ 00aecf94 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aec990 to 00aec9eb has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"members:",8);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aec9ec to 00aeca0b has its CatchHandler @ 00aecf90 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aeca18 to 00aeca2b has its CatchHandler @ 00aed084 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (*(int *)(param_2 + 0x148) != 0) {
    uVar14 = 0;
    do {
      puVar9 = (undefined8 *)*puVar7;
      if (puVar9 == (undefined8 *)0x0) {
LAB_00aecabc:
        puVar18 = puVar7;
      }
      else {
        uVar15 = *(long *)(param_2 + 0x150) + uVar14 * 0x170;
        puVar18 = puVar7;
        do {
          if ((ulong)puVar9[4] >= uVar15) {
            puVar18 = puVar9;
          }
          puVar9 = (undefined8 *)puVar9[(ulong)puVar9[4] < uVar15];
        } while (puVar9 != (undefined8 *)0x0);
        if ((puVar18 == puVar7) || (uVar15 < (ulong)puVar18[4])) goto LAB_00aecabc;
      }
      uVar15 = local_c0 >> 1 & 0x7f;
      pcVar17 = pcVar11;
      if ((local_c0 & 1) != 0) {
        uVar15 = local_b8;
        pcVar17 = local_b0;
      }
                    /* try { // try from 00aecadc to 00aecb03 has its CatchHandler @ 00aed080 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar17,uVar15);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"- *iv",5);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(uint *)(puVar18 + 5));
      pcVar17 = " # ";
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," # ",3);
                    /* try { // try from 00aecb14 to 00aecb1b has its CatchHandler @ 00aed020 */
      SafeString(*(SpvReflectToYaml **)(*(long *)(param_2 + 0x150) + uVar14 * 0x170 + 8),pcVar17);
      uVar15 = (ulong)((byte)local_f0[0] >> 1);
      pcVar17 = (char *)((ulong)local_f0 | 1);
      if (((byte)local_f0[0] & 1) != 0) {
        uVar15 = local_e8;
        pcVar17 = local_e0;
      }
                    /* try { // try from 00aecb34 to 00aecb53 has its CatchHandler @ 00aed038 */
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar17,uVar15);
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aecb54 to 00aecb6f has its CatchHandler @ 00aed024 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aecb7c to 00aecb93 has its CatchHandler @ 00aed038 */
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (((byte)local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_2 + 0x148));
  }
  uVar14 = local_a8 >> 1 & 0x7f;
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aecbc4 to 00aecbf7 has its CatchHandler @ 00aed084 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"format: ",8);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(int *)(param_2 + 0x158));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5," # ",3);
                    /* try { // try from 00aecc00 to 00aecc0b has its CatchHandler @ 00aecf6c */
  ToStringFormat(*(SpvReflectFormat *)(param_2 + 0x158));
  uVar14 = (ulong)((byte)local_f0[0] >> 1);
  pcVar17 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar14 = local_e8;
    pcVar17 = local_e0;
  }
                    /* try { // try from 00aecc28 to 00aecc47 has its CatchHandler @ 00aecff4 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar17,uVar14);
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aecc48 to 00aecc67 has its CatchHandler @ 00aecf8c */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_108);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_108);
                    /* try { // try from 00aecc74 to 00aecc87 has its CatchHandler @ 00aecff4 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(int *)(this + 8) == 0) goto LAB_00aece00;
  pSVar8 = *(SpvReflectToYaml **)(param_2 + 0x160);
  if (pSVar8 == (SpvReflectToYaml *)0x0) {
    uVar14 = (ulong)((byte)local_a8 >> 1);
    pcVar17 = pcVar19;
    if ((local_a8 & 1) != 0) {
      uVar14 = local_a0;
      pcVar17 = local_98;
    }
                    /* try { // try from 00aecd90 to 00aecdbf has its CatchHandler @ 00aed084 */
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar17,uVar14);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"type_description:",0x11);
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aecdc0 to 00aecddf has its CatchHandler @ 00aecf54 */
    plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aecdec to 00aece5f has its CatchHandler @ 00aed084 */
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    goto LAB_00aece00;
  }
  ppSVar20 = (SpvReflectToYaml **)(this + 0x18);
  ppSVar10 = (SpvReflectToYaml **)*ppSVar20;
  ppSVar13 = ppSVar20;
  if (ppSVar10 == (SpvReflectToYaml **)0x0) {
LAB_00aecce0:
    ppSVar13 = ppSVar20;
  }
  else {
    do {
      if (ppSVar10[4] >= pSVar8) {
        ppSVar13 = ppSVar10;
      }
      ppSVar10 = (SpvReflectToYaml **)ppSVar10[ppSVar10[4] < pSVar8];
    } while (ppSVar10 != (SpvReflectToYaml **)0x0);
    if ((ppSVar13 == ppSVar20) || (pSVar8 < ppSVar13[4])) goto LAB_00aecce0;
  }
  uVar14 = (ulong)((byte)local_a8 >> 1);
  pcVar17 = pcVar19;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar17 = local_98;
  }
                    /* try { // try from 00aeccfc to 00aecd33 has its CatchHandler @ 00aecff0 */
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar17,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"type_description: *td",0x15);
  cVar4 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                     *(uint *)(ppSVar13 + 5));
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aecd34 to 00aecd53 has its CatchHandler @ 00aecf68 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aecd60 to 00aecd73 has its CatchHandler @ 00aecff0 */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
LAB_00aece00:
  uVar14 = local_a8 >> 1 & 0x7f;
  if ((local_a8 & 1) != 0) {
    uVar14 = local_a0;
    pcVar19 = local_98;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar19,uVar14);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"word_offset: { location: ",0x19);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(param_2 + 0x168));
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5," }",2)
  ;
  std::__ndk1::ios_base::getloc();
                    /* try { // try from 00aece60 to 00aece7f has its CatchHandler @ 00aecf88 */
  plVar6 = (long *)std::__ndk1::locale::use_facet(local_f0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)local_f0);
                    /* try { // try from 00aece8c to 00aece9f has its CatchHandler @ 00aed084 */
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
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


