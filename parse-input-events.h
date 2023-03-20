struct parse_key {
	unsigned int code;
	char ascii;
};
struct parse_key keynames[] = {
{2, '1'},
{3, '2'},
{4, '3'},
{5, '4'},
{6, '5'},
{7, '6'},
{8, '7'},
{9, '8'},
{10, '9'},
{11, '0'},
{12, '-'},
{13, '='},
{16, 'Q'},
{17, 'W'},
{18, 'E'},
{19, 'R'},
{20, 'T'},
{21, 'Y'},
{22, 'U'},
{23, 'I'},
{24, 'O'},
{25, 'P'},
{28, '\n'},
{30, 'A'},
{31, 'S'},
{32, 'D'},
{33, 'F'},
{34, 'G'},
{35, 'H'},
{36, 'J'},
{37, 'K'},
{38, 'L'},
{39, ';'},
{40, '\''},
{44, 'Z'},
{45, 'X'},
{46, 'C'},
{47, 'V'},
{48, 'B'},
{49, 'N'},
{50, 'M'},
{51, ','},
{52, '.'},
{53, '/'},
{55, '*'},
{57, ' '},
{71, '7'},
{72, '8'},
{73, '9'},
{74, '-'},
{75, '4'},
{76, '5'},
{77, '6'},
{78, '+'},
{79, '1'},
{80, '2'},
{81, '3'},
{82, '0'},
{83, '.'},
{96, '\n'},
{98, '/'},
{117, '='},
{121, ','},
};
#define keynames_size (sizeof(keynames)/sizeof(struct parse_key))
