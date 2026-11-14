using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;

namespace Pizza_Poject
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        int sumPrice = 0;

        private void rdSmall_CheckedChanged(object sender, EventArgs e)
        {
            if (rdSmall.Checked)
            {
                lbSizeAnswer.Text = "Small";
                lbPriceAnswer.ForeColor = Color.LimeGreen;
                SumToPrice(10);
            }
            else
            {
                SubtractedFromPrice(10);
            }
        }

        private void rdMedium_CheckedChanged(object sender, EventArgs e)
        {
            if (rdMedium.Checked)
            {
                lbSizeAnswer.Text = "Medium";
                lbPriceAnswer.ForeColor = Color.LimeGreen;
                SumToPrice(20);
            }
            else
            {
                SubtractedFromPrice(20);
            }

        }

        private void rdLarge_CheckedChanged(object sender, EventArgs e)
        {
            if(rdLarge.Checked)
            {
                lbSizeAnswer.Text = "Large";
                lbPriceAnswer.ForeColor = Color.LimeGreen;
                SumToPrice(30);
            }
            else
            {
                SubtractedFromPrice(30);
            }

        }

        private void chkExtraCheese_CheckedChanged(object sender, EventArgs e)
        {
            if(chkExtraCheese.Checked)
            {
                if(lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Extra Cheese";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Extra Cheese";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
            }
            else
            {
                if(lbToppingsAnswer.Text == "Extra Cheese")
                {
                    lbToppingsAnswer.Text = "No Toppings.";

                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if(lbToppingsAnswer.Text.StartsWith("Extra Cheese"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Extra Cheese, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Extra Cheese"), ", Extra Cheese".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void chkOnion_CheckedChanged(object sender, EventArgs e)
        {
            if(chkOnion.Checked)
            {
                if (lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Onion";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Onion";
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                
            }
            else
            {
                if(lbToppingsAnswer.Text == "Onion")
                {
                    lbToppingsAnswer.Text = "No Toppings.";
                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if (lbToppingsAnswer.Text.StartsWith("Onion"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Onion, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Onion"), ", Onion".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void chkMushrooms_CheckedChanged(object sender, EventArgs e)
        {
            if(chkMushrooms.Checked)
            {
                if(lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Mushrooms";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Mushrooms";
                    SumToPrice(10);
                    UpdateLabelSize();
                }
            }
            else
            {
                if(lbToppingsAnswer.Text == "Mushrooms")
                {
                    lbToppingsAnswer.Text = "No Toppings.";
                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if (lbToppingsAnswer.Text.StartsWith("Mushrooms"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Mushrooms, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Mushrooms"), ", Mushrooms".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void chkOlives_CheckedChanged(object sender, EventArgs e)
        {
            if(chkOlives.Checked)
            {
                if(lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Olives";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Olives";
                    SumToPrice(10);
                    UpdateLabelSize();
                }
            }
            else
            {
                if(lbToppingsAnswer.Text == "Olives")
                {
                    lbToppingsAnswer.Text = "No Toppings.";
                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if (lbToppingsAnswer.Text.StartsWith("Olives"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Olives, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Olives"), ", Olives".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void chkTomatoes_CheckedChanged(object sender, EventArgs e)
        {
            if(chkTomatoes.Checked)
            {
                if(lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Tomatoes";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Tomatoes";
                    SumToPrice(10);
                    UpdateLabelSize();
                }
            }
            else
            {
                if (lbToppingsAnswer.Text == "Tomatoes")
                {
                    lbToppingsAnswer.Text = "No Toppings.";
                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if (lbToppingsAnswer.Text.StartsWith("Tomatoes"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Tomatoes, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Tomatoes"), ", Tomatoes".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void chkGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            if(chkGreenPeppers.Checked)
            {
                if (lbToppingsAnswer.Text == "No Toppings.")
                {
                    lbToppingsAnswer.Text = "Green Pepperse";
                    lbToppingsAnswer.ForeColor = Color.LimeGreen;
                    SumToPrice(10);
                    UpdateLabelSize();
                }
                else
                {
                    lbToppingsAnswer.Text += ", Green Pepperse";
                    SumToPrice(10);
                    UpdateLabelSize();
                }
            }
            else
            {
                if (lbToppingsAnswer.Text == "Green Pepperse")
                {
                    lbToppingsAnswer.Text = "No Toppings.";
                    lbToppingsAnswer.ForeColor = Color.Red;
                    SubtractedFromPrice(10);
                }
                else if (lbToppingsAnswer.Text.StartsWith("Green Pepperse"))
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(0, "Green Pepperse, ".Length);
                    SubtractedFromPrice(10);
                }
                else
                {
                    lbToppingsAnswer.Text = lbToppingsAnswer.Text.Remove(lbToppingsAnswer.Text.IndexOf(", Green Pepperse"), ", Green Pepperse".Length);
                    SubtractedFromPrice(10);
                }
            }
        }

        private void rdThinCrust_CheckedChanged(object sender, EventArgs e)
        {
            if (rdThinCrust.Checked)
            {
                lbCrustTybeAnswer.Text = "Thin Crust";
                lbCrustTybeAnswer.ForeColor = Color.LimeGreen;
                SumToPrice(10);
            }
            else
            {
                SubtractedFromPrice(10);
            }

        }

        private void rdThickCrust_CheckedChanged(object sender, EventArgs e)
        {
            if (rdThickCrust.Checked)
            {
                lbCrustTybeAnswer.Text = "Thick Crust";
                lbCrustTybeAnswer.ForeColor = Color.LimeGreen;
                SumToPrice(10);
            }
            else
            {
                SubtractedFromPrice(10);
            }

        }

        private void rdEatIn_CheckedChanged(object sender, EventArgs e)
        {
            if (rdEatIn.Checked)
            {
                lbWhereToEatAnswer.Text = "Eat In";
                lbWhereToEatAnswer.ForeColor = Color.LimeGreen;
            }
            
        }

        private void rdTakeOut_CheckedChanged(object sender, EventArgs e)
        {
            if (rdTakeOut.Checked)
            {
                lbWhereToEatAnswer.Text = "Take Out";
                lbWhereToEatAnswer.ForeColor = Color.LimeGreen;
            }
                
        }

        private void UpdateLabelSize()
        {
            lbToppingsAnswer.AutoSize = true;

            lbToppingsAnswer.MaximumSize = new Size(gbOrderSize.ClientSize.Width - lbToppingsAnswer.Left - 10, 0);
        }

        private void SumToPrice(int Price)
        {

            sumPrice += Price;
            lbPriceAnswer.Text = sumPrice.ToString() + "$";
        }

        private void SubtractedFromPrice(int Price)
        {
            sumPrice -= Price;
            lbPriceAnswer.Text = sumPrice.ToString() + "$";
        }
    }
}
