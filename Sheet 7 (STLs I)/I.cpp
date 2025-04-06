#include <iostream>
#include <vector>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n_cardat;
        cin >> n_cardat;
        vector<int> card_order(n_cardat);
        vector<int> pos_card(n_cardat + 1);

        for (int i = 0; i < n_cardat; ++i)
        {
            cin >> card_order[i];
            pos_card[card_order[i]] = i;
        }

        vector<int> result_deck_final;
        vector<bool> moved_card(n_cardat, false);
        int last_card_in_hand = n_cardat - 1;

        for (int card_value = n_cardat; card_value >= 1; --card_value)
        {
            int original_pos = pos_card[card_value];

            if (original_pos <= last_card_in_hand && !moved_card[original_pos])
            {
                for (int i = original_pos; i <= last_card_in_hand; ++i)
                {
                    result_deck_final.push_back(card_order[i]);
                    moved_card[i] = true;
                }
                last_card_in_hand = original_pos - 1;
            }
        }

        for (int i = 0; i < result_deck_final.size(); ++i)
        {
            cout << result_deck_final[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
